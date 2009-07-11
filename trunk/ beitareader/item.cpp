#include "item.h"

Item::Item(QString newTitle, QString newLink , QString newDescription ,
           QString newAuthor , QDate newPubdate, int newIsread,int newChannelid)
{
    title = newTitle;
    link = newLink;
    description = newDescription;
    author = newAuthor;
    pubdate = newPubdate;
    isread = newIsread;
    channelid = newChannelid;
}
Item::Item()
{
}

//向数据库中插入Item
void Item::insertItem(Item& item)
{
    QSqlQuery query;
    int count = 0;
    query.prepare("select * from Item where channelid = :channelid");
    query.bindValue(":channelid",item.channelid);
    query.exec();
    bool first = true;
    int smallID;
    int bigID;
    while(query.next())
    {
        if(first)
        {
            smallID = query.value(0).toInt();
            first = false;
        }
        count++;
        if(count == 30)
        {
            bigID = query.value(0).toInt();
        }
    }
    if(count >= 100)
    {
        query.prepare("delete from Item where channelid = :channelid and id < :bigID and id >= :smallID");
        query.bindValue(":smallID",smallID);
        query.bindValue(":bigID",bigID);
        query.bindValue(":channelid",item.channelid);
        query.exec();
    }
    //query.exec("select * from Item ");
    query.prepare("insert into Item(title,link,description,author,pubdate,isread, channelid) "
                  "values(:title,:link,:description,:author,:pubdate,:isread,:channelid)");
    query.bindValue(":title", item.title);
    query.bindValue(":link", item.link);
    query.bindValue(":description", item.description);
    query.bindValue(":author",item.author);
    query.bindValue(":pubdate", item.pubdate);
    query.bindValue(":isread",item.isread);
    query.bindValue(":channelid", item.channelid);
    query.exec();
    item.id = query.lastInsertId().toInt();
}

//从数据库中删除Item
void Item::deleteItem(Item& item)
{
    QSqlQuery query;
    query.prepare("delete from Item where id = :id");
    query.bindValue(":id",item.id);
    query.exec();
}

//修改数据库中的Item
void Item::updateItem(Item& item)
{
    QSqlQuery query;
    query.prepare("update Item set title=:title,link=:link,description=:description,"
                  "author=:author,pubdate=:pudate,isread=:isread,"
                  "channelid=:channelid where id=:id");
    query.bindValue(":title",item.title);
    query.bindValue(":link",item.link);
    query.bindValue(":description",item.description);
    query.bindValue(":author",item.author);
    query.bindValue(":pubdate",item.pubdate);
    query.bindValue(":isread",item.isread);
    query.bindValue(":channelid",item.channelid);
    query.bindValue(":id",item.id);
    query.exec();
}
//从数据库中选取未读的Item
QVector<Item*> Item::selectNotRead()
{
    QSqlQuery query;
    query.prepare("select * from Item where isread = :isread");
    query.bindValue(":isread",0);
    query.exec();
    return vectorOfItem(query);
}

//从数据库中选取已读的Item
QVector<Item*> Item::selectIsRead()
{
    QSqlQuery query;
    query.prepare("select * from Item where isread = :isread");
    query.bindValue(":isread",1);
    query.exec();
    return vectorOfItem(query);
}

//通过作者关键字进行搜索，返回Item对象集合
QVector<Item*> Item::searchByAuthor(QString searchString)
{
    QSqlQuery query;
    query.exec("select * from Item where author like '%"+searchString+"%'");
    return vectorOfItem(query);
}

//通过文章标题关键字进行搜索，返回Item对象集合
QVector<Item*> Item::searchByTitle(QString searchString)
{
    QSqlQuery query;
    query.exec("select * from Item where title like '%"+searchString+"%'");
    return vectorOfItem(query);
}

//通过摘要关键字进行搜索，返回Item对象集合
QVector<Item*> Item::searchByDescription(QString searchString)
{
    QSqlQuery query;
    query.exec("select * from Item where description like '%"+searchString+"%'");
    return vectorOfItem(query);
}

//通过地址链接关键字进行搜索，返回Item对象集合
QVector<Item*> Item::searchByLink(QString searchString)
{
    QSqlQuery query;
    query.exec("select * from Item where link like '%"+searchString+"%'");
    return vectorOfItem(query);
}

//通过日期进行搜索，返回Item对象集合
QVector<Item*> Item::searchByPubdate(QDate date1, QDate date2)
{
    QSqlQuery query;
    QVector<Item*> v;
    query.exec("select * from Item");
    while(query.next())
    {
        Item *item = new Item(query.value(1).toString(),query.value(2).toString(),query.value(3).toString(),
                 query.value(4).toString(),query.value(5).toDate(),query.value(6).toInt(),
                 query.value(7).toInt());
        if(query.value(5).toDate() >date1 && query.value(5).toDate() < date2)
            v.append(item);
    }
    return v;
}

//获得特定的Item集合
QVector<Item*> Item::vectorOfItem(QSqlQuery& query)
{
    QVector<Item*> v;
    while(query.next())
    {
        v.append(new Item(query.value(1).toString(),query.value(2).toString(),query.value(3).toString(),
                     query.value(4).toString(),query.value(5).toDate(),query.value(6).toInt(),
                     query.value(7).toInt()));
    }
    return v;
}

//通过channelid获取所有的item,并按时间降序
QVector<Item*> Item::getItemsByChannelIDDescByDate(int newChannelID)
{
    QSqlQuery query;
    query.prepare("select * from Item where channelid = :channelid order by pubdate desc");
    query.bindValue(":channelid", newChannelID);
    query.exec();
    return vectorOfItem(query);
}


QVector<Item*> Item::getItemsByChannelIDAscByDate(int newChannelID)
{
    QSqlQuery query;
    query.prepare("select * from Item where channelid = :channelid order by pubdate asc");
    query.bindValue(":channelid", newChannelID);
    query.exec();
    return vectorOfItem(query);
}

QVector<Item*> Item::getItemsByChannelID(int newChannelID)
{
    QSqlQuery query;
    query.prepare("select * from Item where channelid = :channelid");
    query.bindValue(":channelid", newChannelID);
    query.exec();
    return vectorOfItem(query);
}
