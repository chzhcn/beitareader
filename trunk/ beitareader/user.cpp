#include "user.h"
User::User(QString newName,QString newPassword,int newFavchannelid,
           int newAveragereadtime,int newReaddays,int newShowabs,int newRefreshtime)
{
    name = newName;
    password = newPassword;
    favchannelid = newFavchannelid;
    averagereadtime = newAveragereadtime;
    readdays = newReaddays;
    showabs = newShowabs;
    refreshtime = newRefreshtime;
}
User::User()
{
}

//修改数据库中User
void User::updateUser(User& user)
{
    QSqlQuery query;
    query.prepare("update User set name=:name,password=:password,favchannelid=:favchannelid,"
                  "averagereadtime=:averagereadtime,readdays=:readdays,"
                  "showabs=:showabs,refreshtime=:refreshtime where id=:id");
    query.bindValue(":name",user.name);
    query.bindValue(":password",user.password);
    query.bindValue(":favchannelid",user.favchannelid);
    query.bindValue(":averagereadtime",user.averagereadtime);
    query.bindValue(":readdays",user.readdays);
    query.bindValue(":showabs",user.showabs);
    query.bindValue(":refreshtime",user.refreshtime);
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
                  query.value(7).toInt());
        user = u;
        user.id = query.value(0).toInt();
    }
    return user;
}

//创建用户
void User::createUser(QString newName,QString newPassword)
{
    QSqlQuery query;
    query.prepare("select * from User where name = :name");
    query.bindValue(":name",newName);
    query.exec();
    while(query.next())
    {
        if(query.value(1).toString() == newName)
        {
            QMessageBox::about(0,"Error!",QString::fromLocal8Bit("用户名已经存在！"));
            return;
        }
    }
    query.prepare("insert into User(name,password,favchannelid,averagereadtime,readdays,showabs,refreshtime) "
                  "values (:name,:password,:favchannelid,"
                  ":averagereadtime,:readdays,:showabs,:refreshtime)");
    query.bindValue(":name",newName);
    query.bindValue(":password",newPassword);
    query.bindValue(":favchannelid",0);
    query.bindValue(":averagereadtime",0);
    query.bindValue(":readdays",0);
    query.bindValue(":showabs",0);
    query.bindValue(":refreshtime",300000);

    query.exec();
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

//To be implement
//if right return its id;
//if wrong return 0;
int User::checkPassword(QString name,QString password)
{
    return 1;
}
