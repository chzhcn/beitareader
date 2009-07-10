#ifndef USER_H
#define USER_H
#include <QString>
#include <QStringList>
#include <QSqlQuery>
#include <QVector>
#include <QDate>
#include <QtSql>
#include <QMessageBox>
class User
{
public:
    User(QString newName,QString newPassword,int newFavchannelid,
           int newAveragereadtime,int newReaddays,int newShowabs,int newRefreshtime);
    User();

    int getUserID(){return id;}
    void setName(QString newName){name = newName;updateUser(*this);}
    QString getName(){return name;}
    void setPassword(QString newPassword){password = newPassword;updateUser(*this);}
    //void setFavchannelid(int newChannelid){favchannelid = newFavchannelid;updateUser(*this);}
    void setReadDays(int newReaddays){readdays = newReaddays;updateUser(*this);}
    int getReadDays(){return readdays;}
    void setShowAbstract(int newShowabs){showabs = newShowabs;updateUser(*this);}
    int getShowAbstract(){return showabs;}
    void setRefreshTime(int newRefreshtime){refreshtime = newRefreshtime;updateUser(*this);}
    int getRefreshTime(){return refreshtime;}

    static User getUserByName(QString newName);
    static int getUserIDByName(QString newName);
    static void createUser(QString newName,QString newPassword);
    static void deleteUserByName(QString newName);
    // to do:
    static int checkPassword(QString,QString);
private:
    int id;
    QString name;
    QString password;
    int favchannelid;
    int averagereadtime;
    int readdays;
    int showabs;
    int refreshtime;
    void updateUser(User& user);
};

#endif // USER_H
