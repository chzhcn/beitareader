#include "collection.h"
Collection::Collection(QString newName,QString newTitle,QString newLink,int newUserid)
{
    name = newName;
    title = newTitle;
    link = newLink;
    userid = newUserid;
}
Collection::Collection()
{
}

//在数据库中修改Collection
void Collection::updateCollection(Collection& collection)
{
    QSqlQuery query;
    query.prepare("update Collection set name=:name,title=:title,link=:link,userid=:userid where id=:id");
    query.bindValue(":name",collection.name);
    query.bindValue(":title",collection.title);
    query.bindValue(":link",collection.link);
    query.bindValue(":userid",collection.userid);
    query.bindValue(":id",collection.id);
    query.exec();
}

//向数据库中插入数据
void Collection::insertCollection(Collection& collection)
{
    QSqlQuery query;
    query.prepare("select * from Collection where name=:name,userid=:userid");
    query.bindValue(":name",collection.name);
    query.bindValue(":userid",collection.userid);
    query.exec();
    if(query.next())
    {
        QMessageBox::about(0,"Error!",QString::fromLocal8Bit("该网页已被收藏"));
        return;
    }
    query.prepare("insert into Collection(name,title,link,userid) values(:name,:title,:link,:userid)");
    query.bindValue(":name",collection.name);
    query.bindValue(":title",collection.title);
    query.bindValue(":link",collection.link);
    query.bindValue(":userid",collection.userid);
    query.exec();
    collection.id = query.lastInsertId().toInt();
}

//从数据库中删除数据
void Collection::deleteCollection(Collection& collection)
{
    QSqlQuery query;
    query.prepare("delete from Collection where name=:name and userid=:userid");
    query.bindValue(":name",collection.name);
    query.bindValue(":userid",collection.userid);
    query.exec();
}
