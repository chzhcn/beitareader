#include <QtGui/QApplication>
#include "nlogincontroller.h"
#include "user.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Beita.db");
    if(!db.isOpen())
        db.open();


    BeitaReader w;
    LoginWidget l;
    LoginController lc(&l,&w);
    l.show();

    QSqlQuery query;
    query.exec("drop table Item");
    query.exec("drop table User");
    query.exec("drop table Channel");
    query.exec("drop table Folder");
    query.exec("drop table User");
    query.exec("drop table Collection");

    query.exec("CREATE TABLE User ("
              "id INTEGER PRIMARY KEY AUTOINCREMENT,"
              "name TEXT NOT NULL,"
              "password TEXT NOT NULL,"
              "autorefresh INTEGER NOT NULL,"
              "startrefresh INTEGER NOT NULL,"
              "readfilter INTEGER NOT NULL,"
              "showabs INTEGER NOT NULL,"
              "refreshtime INTEGER NOT NULL,"
              "automark INTEGER NOT NULL,"
              "savenumber INTEGER NOT NULL,"
              "lastrefresh DATETIME NOT NULL)");

    query.exec("CREATE TABLE Item ("
              "id INTEGER PRIMARY KEY AUTOINCREMENT,"
              "title TEXT NOT NULL,"
              "link TEXT NOT NULL,"
              "description TEXT NOT NULL,"
              "author TEXT ,"
              "pubdate DATE NOT NULL,"
              "isread INTEGER DEFAULT 0,"
              "channelid INTEGER NOT NULL)");

   query.exec("create table Channel ("
               "id integer primary key autoincrement,"
               "title text not null,"
               "url text not null,"
               "parentid integer not null,"
               "savenum integer not null,"
               "userid integer not null,"
               "readtime integer ,"
               "readnum integer not null default 0)");

    query.exec("create table Folder("
               "id integer primary key autoincrement,"
               "name text not null,"
               "parentid integer ,"
               "userid integer not null)");

    query.exec("create table Collection("
               "id integer primary key autoincrement,"
               "name text not null,"
               "title text not null,"
               "link text not null,"
               "userid integer not null)");

    User::createUser("lilu","123");

    return a.exec();
}
