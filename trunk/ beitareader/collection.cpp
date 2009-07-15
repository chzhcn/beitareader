#include "collection.h"
Collection::Collection(QString newName,QString newLink,int newUserid,int newParentId)
{
    name = newName;
    link = newLink;
    userid = newUserid;
    parentid = newParentId;
}
Collection::Collection()
{
}

//在数据库中修改Collection
void Collection::updateCollection(Collection& collection)
{
    QSqlQuery query;
    query.prepare("update Collection set name=:name,link=:link,userid=:userid, parentid=:parentid where id=:id");
    query.bindValue(":name",collection.name);
    query.bindValue(":link",collection.link);
    query.bindValue(":userid",collection.userid);
    query.bindValue(":parentid",collection.parentid);
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
        //QMessageBox::about(0,"Error!",QString::fromLocal8Bit("该网页已被收藏"));
        return;
    }
    query.prepare("insert into Collection(name,link,userid,parentid) values(:name,:link,:userid,:parentid)");
    query.bindValue(":name",collection.name);
    query.bindValue(":link",collection.link);
    query.bindValue(":parentid",collection.parentid);
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

//通过ID删除Collection
void Collection::deleteCollectionByID(int newCollectionID)
{
    QSqlQuery query;
    query.prepare("delete from Collection where id = :id");
    query.bindValue(":id", newCollectionID);
    query.exec();
}

//通过收藏文章的组ID获得该组所有collection
QVector<Collection*> Collection::getCollectionsByParentID(int parentID, int userID)
{
    QVector<Collection*> c;
    QSqlQuery query;
    query.prepare("select * from Collection where parentid = :parentid and userid = :userid");
    query.bindValue(":parentid", parentID);
    query.bindValue(":userid", userID);
    query.exec();
    while(query.next())
    {
        Collection *collection = new Collection(query.value(1).toString(), query.value(2).toString(),
                                                query.value(3).toInt(), query.value(4).toInt());
        collection->id = query.value(0).toInt();
        c.append(collection);
    }
    return c;
}

Collection *Collection::getCollectionByID(int newID)
{
    QSqlQuery query;
    query.prepare("select * from Collection where id = :id");
    query.bindValue(":id", newID);
    query.exec();
    if(query.next())
    {
        Collection *collection = new Collection(query.value(1).toString(), query.value(2).toString(),
                                                query.value(3).toInt(), query.value(4).toInt());
        collection->id = query.value(0).toInt();
        return collection;
    }
    return NULL;
}
