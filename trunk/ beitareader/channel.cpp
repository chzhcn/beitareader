#include "channel.h"

Channel::Channel(QString newTitle, QString newUrl, int newParentid,
                 int newSavenum, int newUserid, int newReadtime, int newReadnum)
{
    title = newTitle;
    url = newUrl;
    parentid = newParentid;
    savenum = newSavenum;
    userid = newUserid;
    readtime = newReadtime;
    readnum = newReadnum;
}
Channel::Channel()
{
}

//向数据库内插入频道
bool Channel::insertChannel(Channel& channel)
{
    QSqlQuery query;
    query.prepare("select * from Channel where url=:url and parentid=:parentid");
    query.bindValue(":url",channel.url);
    query.bindValue(":parentid",channel.parentid);
    query.exec();
    if(query.next())
    {
        QMessageBox::about(0,"Error",QString::fromLocal8Bit("该频道在此文件夹中已经存在"));
        channel.id = query.value(0).toInt();
        return false;
    }
    query.prepare("insert into Channel(title, url, parentid, savenum, userid, "
                "readtime, readnum) values(:title, :url, :parentid,:savenum,"
                ":userid, :readtime, :readnum)");
    query.bindValue(":title",channel.title);
    query.bindValue(":url",channel.url);
    query.bindValue(":parentid",channel.parentid);
    query.bindValue(":savenum",channel.savenum);
    query.bindValue(":userid",channel.userid);
    query.bindValue(":readtime",channel.readtime);
    query.bindValue(":readnum",channel.readnum);
    query.exec();
    channel.id = query.lastInsertId().toInt();
    return true;
}

//从数据库中删除频道
void Channel::deleteChannel(Channel& channel)
{
    QSqlQuery query;
    /*先删除该频道的所有Item*/
    query.prepare("delete from Item where channelid = :channelid");
    query.bindValue(":channelid",channel.id);
    query.exec();

    query.prepare("delete from Channel where id = :id");
    query.bindValue(":id",channel.id);
    query.exec();
}

//修改频道
void Channel::updateChannel(Channel& channel)
{
    QSqlQuery query;
    query.prepare("update Channel set title=:title,url=:url,"
                  "parentid=:parentid,savenum=:savenum,userid=:userid,"
                  "readtime=:readtime,readnum=:readnum where id=:id");
    query.bindValue(":title",channel.title);
    query.bindValue(":url",channel.url);
    query.bindValue(":parentid",channel.parentid);
    query.bindValue(":savenum",channel.savenum);
    query.bindValue(":userid",channel.userid);
    query.bindValue(":readtime",channel.readtime);
    query.bindValue(":readnum",channel.readnum);
    query.bindValue(":id",channel.id);
    query.exec();
}

//更新所有频道
/*void Channel::updateIAllChannelsByUserID(int newUserID)
{
    QSqlQuery query;
    query.prepare("select * from Channel where userid = :userid");
    query.bindValue(":userid",newUserID);
    query.exec();
    while(query.next())
    {
        HttpGet* getter = new HttpGet(query.value(0).toInt(), QUrl(query.value(2).toString()),query.value(5).toInt());
        getter->getFile();
    }
}

//更新单个频道
void Channel::updateChannelByChannelID(int newChannelID)
{
    QSqlQuery query;
    query.prepare("select * from Channel where id = :id");
    query.bindValue(":id",newChannelID);
    query.exec();
    if(query.next())
    {
        HttpGet* getter = new HttpGet(query.value(0).toInt(), QUrl(query.value(2).toString()),query.value(5).toInt());
        getter->getFile();
    }
}*/

//通过FolderID获得所有频道
QVector<Channel*> Channel::getChannelsByFolderID(int newFolderID)
{
    QSqlQuery query;
    query.prepare("select * from Channel where parentid = :parentid");
    query.bindValue(":parentid", newFolderID);
    query.exec();
    QVector<Channel*> v;
    while(query.next())
    {
        Channel *channel = new Channel(query.value(1).toString(),query.value(2).toString(),query.value(3).toInt(),
                        query.value(4).toInt(),query.value(5).toInt(),query.value(6).toInt(),query.value(7).toInt());
        channel->id = query.value(0).toInt();
        v.append(channel);
    }
    return v;
}

//通过ID删除频道
void Channel::deleteChannelByChannelID(int newChannelID)
{
    QSqlQuery query;
    query.prepare("delete from Channel where id = :id");
    query.bindValue(":id", newChannelID);
    query.exec();
}

Channel *Channel::getChannelByChannelID(int channelID)
{
    QSqlQuery query;
    query.prepare("select * from Channel where id = :id");
    query.bindValue(":id", channelID);
    query.exec();
    if (query.next())
    {
        Channel *channel = new Channel(query.value(1).toString(),query.value(2).toString(),query.value(3).toInt(),
                        query.value(4).toInt(),query.value(5).toInt(),query.value(6).toInt(),
                        query.value(7).toInt());
        channel->id = query.value(0).toInt();
        return channel;
    }
    return NULL;

}

QVector<Channel*> Channel::getChannelsByUserID(int newUserID)
{
    QSqlQuery query;
    query.prepare("select * from Channel where userid = :userid");
    query.bindValue(":userid", newUserID);
    query.exec();
    QVector<Channel*> v;
    while(query.next())
    {
        Channel *channel = new Channel(query.value(1).toString(),query.value(2).toString(),query.value(3).toInt(),
                        query.value(4).toInt(),query.value(5).toInt(),query.value(6).toInt(),query.value(7).toInt());
        channel->id = query.value(0).toInt();
        v.append(channel);
    }
    return v;
}

int Channel::getFavouriteChannelByUserID(int newUserId)
{
    QSqlQuery query;
    query.prepare("select * from Channel where userid = :userid order by readnum desc");
    query.bindValue(":userid", newUserId);
    query.exec();
    if(query.next())
    { 
        return query.value(0).toInt();
    }
    return 0;
}
