#include "user.h"
User::User(QString newName,QString newPassword,int newAutoRefresh,
           int newStartRefresh,int newReadFilter,int newShowabs,
           int newRefreshtime,int newAutoMark, int newSaveNumber, QDateTime newLastRefresh)
{
    name = newName;
    password = newPassword;
    autorefresh = newAutoRefresh;
    startrefresh = newStartRefresh;
    readfilter = newReadFilter;
    showabs = newShowabs;
    refreshtime = newRefreshtime;
    automark = newAutoMark;
    savenumber = newSaveNumber;
    lastrefresh = newLastRefresh;
}

User::User()
{
}

//修改数据库中User
void User::updateUser(User& user)
{
    QSqlQuery query;
    query.prepare("update User set name=:name,password=:password,autorefresh=:autorefresh,"
                  "startrefresh=:startrefresh,readfilter=:readfilter,savenumber=:savenumber"
                  "showabs=:showabs,refreshtime=:refreshtime,automark=:automark,lastrefresh=:lastrefresh"
                  "where id=:id");
    query.bindValue(":name",user.name);
    query.bindValue(":password",user.password);
    query.bindValue(":autorefresh",user.autorefresh);
    query.bindValue(":startrefresh",user.startrefresh);
    query.bindValue(":savenumber",user.savenumber);
    query.bindValue(":readfilter",user.readfilter);
    query.bindValue(":showabs",user.showabs);
    query.bindValue(":refreshtime",user.refreshtime);
    query.bindValue(":automark",user.automark);
    query.bindValue(":lastrefresh",user.lastrefresh);
    query.bindValue(":id",user.id);
    query.exec();
}

//通过名字找到User
User User::getUserByName(QString newName)
{
    QSqlQuery query;
    query.prepare("select * from User where name = :name");
    query.bindValue(":name",newName);
    query.exec();
    User user;
    if(query.next())
    {
        User u(query.value(1).toString(),query.value(2).toString(),query.value(3).toInt(),
                  query.value(4).toInt(),query.value(5).toInt(),query.value(6).toInt(),
                  query.value(7).toInt(),query.value(8).toInt(),query.value(9).toInt(),
                  query.value(10).toDateTime());
        user = u;
        user.id = query.value(0).toInt();
    }
    return user;
}

//创建用户
bool User::createUser(QString newName,QString newPassword)
{
    QSqlQuery query;
    query.prepare("select * from User where name = :name");
    query.bindValue(":name",newName);
    query.exec();
    while(query.next())
    {
        if(query.value(1).toString() == newName)
        {
            QMessageBox::about(0,"Warning!",QString::fromLocal8Bit("用户名已经存在！"));
            return false;
        }
    }

    query.prepare("insert into User (name,password,autorefresh,"
              "startrefresh,readfilter,showabs,refreshtime,automark,savenumber,lastrefresh)"
              "values (:name,:password,:autorefresh,"
              ":startrefresh,:readfilter,:showabs,:refreshtime,:automark,:savenumber,:lastrefresh)");

    query.bindValue(":name",newName);
    query.bindValue(":password",newPassword);
    query.bindValue(":autorefresh",1);
    query.bindValue(":startrefresh",0);
    query.bindValue(":readfilter",0);
    query.bindValue(":showabs",1);
    query.bindValue(":refreshtime",15);
    query.bindValue(":automark",0);
    query.bindValue(":savenumber",100);
    query.bindValue(":lastrefresh",QDateTime::currentDateTime());
    query.exec();

    return true;
}

void User::deleteUserByName(QString newName)
{
    int userID;
    QSqlQuery query;
    query.prepare("select id from User where name = :name");
    query.bindValue(":name",newName);
    query.exec();
    if(query.next())
    {
        userID = query.value(0).toInt();
    }
    query.prepare("delete from Folder where userid = :userid");
    query.bindValue(":userid",userID);
    query.exec();

    query.prepare("delete from Channel where userid = :userid");
    query.bindValue(":userid",userID);
    query.exec();

    query.prepare("delete from Collection where userid = :userid");
    query.bindValue(":userid",userID);
    query.exec();

    query.prepare("delete from User where name = :name");
    query.bindValue(":name",newName);
    query.exec();
}

int User::getUserIDByName(QString newName)
{
    User user = User::getUserByName(newName);
    return user.id;
}

int User::checkPassword(QString name,QString password)
{
    QSqlQuery query;
    query.prepare("select * from User where name = :name and password = :password");
    query.bindValue(":name",name);
    query.bindValue(":password",password);
    query.exec();

    if(query.next())
    {
        return query.value(0).toInt();
    }
    else
    {
        return 0;
    }
}

User User::getUserById(int id)
{
    QString idString;
    idString.setNum(id,10);

    QSqlQuery query;
    query.prepare("select * from User where id = :id");
    query.bindValue(":id",idString);
    query.exec();
    User user;
    if(query.next())
    {
        User u(query.value(1).toString(),query.value(2).toString(),query.value(3).toInt(),
                  query.value(4).toInt(),query.value(5).toInt(),query.value(6).toInt(),
                  query.value(7).toInt(),query.value(8).toInt(),query.value(9).toInt(),
                  query.value(10).toDateTime());
        user = u;
        user.id = query.value(0).toInt();
    }
    return user;
}

void User::updateAllChannelSaveNumbersByUserID(int id, int saveNumber)
{
    QSqlQuery query;
    query.prepare("update Channel set savenum=:savenum where userid = :id");
    query.bindValue(":savenum",saveNumber);
    query.bindValue(":id",id);
    query.exec();
}
