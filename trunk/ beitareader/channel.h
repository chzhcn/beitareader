#ifndef CHANNEL_H
#define CHANNEL_H
#include "item.h"

class QUrl;
class Channel
{
public:
    Channel();
    Channel(QString newTitle, QString newUrl, int newParentid,
                 int newSavenum, int newUserid, int newReadtime, int newReadnum);

    //int getChannelID(QString newName,int newParentid);
    /*静态方法*/
    static bool insertChannel(Channel& channel);
    static void deleteChannel(Channel& channel);
//    static void updateIAllChannelsByUserID(int newUserID);
//    static void updateChannelByChannelID(int newChannelID);
    static int getFavouriteChannelByUserID(int newUserId);
    static QVector<Channel*> getChannelsByFolderID(int newFolderID);
    static void deleteChannelByChannelID(int newChannelID);
    static Channel *getChannelByChannelID(int channelID);
    static QVector<Channel*> getChannelsByUserID(int newUserID);

    /*属性的set和get方法*/
    int getChannelID(){return id;}
    //void setChannelName(QString& newChannelName){name = newChannelName;}
    //QString getChannelName(){return name;}
    void setChannelTitle(QString& newChannelTitle){title = newChannelTitle;updateChannel(*this);}
    QString getChannelTitle(){return title;}
    void setChannelUrl(QString& newChannelUrl){url = newChannelUrl;updateChannel(*this);}
    QString getChannelUrl(){return url;}
    void setChannelParentid(int newChannelParentid){parentid = newChannelParentid;updateChannel(*this);}
    int getChannelParentid(){return parentid;}
    void setChannelSavenum(int& newSavenum){savenum = newSavenum;updateChannel(*this);}
    int getChannelSavenum(){return savenum;}
    //void setChannelUserid(int& newChannelUserid){userid = newChannelUserid;updateChannel(*this);}
    //int getChannelUserid(){return userid;}
    void setChannelReadtime(int& newChannelReadtime){readtime = newChannelReadtime;updateChannel(*this);}
    int getChannelReadtime(){return readtime;}
    void setChannelReadnum(int& newChannelReadnum){readnum = newChannelReadnum;updateChannel(*this);}
    int getChannelReadnum(){return readnum;}
private:
    int id;
    QString title;     //在树形结构中的名字（用户自己定义的）
    QString url;
    int parentid;
    int savenum;
    int userid;
    int readtime;
    int readnum;
    static void updateChannel(Channel& channel);
};

#endif // CHANNEL_H
