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
    User(QString newName,QString newPassword,int newAutoRefresh,
           int newStartRefresh,int newReadFilter,int newShowabs,
           int newRefreshtime,int newAutoMark,int newsaveNumber,
           QDateTime newLastRefresh);
    User();

    int getUserID(){return id;}

    void setName(QString newName){name = newName;updateUser(*this);}
    QString getName(){return name;}

    void setPassword(QString newPassword){password = newPassword;updateUser(*this);}
    QString getPassword(){return password;}

    void setAutoRefresh(int newAutoRefresh){autorefresh = newAutoRefresh;updateUser(*this);}
    int getAutoRefresh(){return autorefresh;}

    void setStartRefresh(int newStartRefresh){startrefresh = newStartRefresh;updateUser(*this);}
    int getStartRefresh(){return startrefresh;}

    void setReadFilter(int newReadFilter){readfilter = newReadFilter;updateUser(*this);}
    int getReadFilter(){return readfilter;}

    void setShowAbstract(int newShowabs){showabs = newShowabs;updateUser(*this);}
    int getShowAbstract(){return showabs;}

    void setRefreshTime(int newRefreshtime){refreshtime = newRefreshtime;updateUser(*this);}
    int getRefreshTime(){return refreshtime;}

    void setAutoMark(int newAutoMark){automark = newAutoMark;updateUser(*this);}
    int getAutoMark(){return automark;}

    void setSaveNumber(int newSaveNumber){savenumber=newSaveNumber;updateUser(*this);
    updateAllChannelSaveNumbersByUserID(this->id,newSaveNumber);}
    int getSaveNumber(){return savenumber;}

    void setLastRefresh(QDateTime newLastRefresh){lastrefresh = newLastRefresh;updateUser(*this);}
    QDateTime getLastRefresh(){return lastrefresh;}

    static User getUserByName(QString newName);
    static User getUserById(int id);
    static int getUserIDByName(QString newName);
    static bool createUser(QString newName,QString newPassword);
    static void deleteUserByName(QString newName);
    static void updateAllChannelSaveNumbersByUserID(int id, int saveNumber);
    static int checkPassword(QString name, QString password);

private:
    int id;
    QString name;
    QString password;
    int autorefresh;  //
    int startrefresh;
    int readfilter;
    int showabs;
    int refreshtime;
    int automark;
    int savenumber;
    QDateTime lastrefresh;
    void updateUser(User& user);
};

#endif // USER_H
