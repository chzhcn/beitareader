#include <QtGui/QApplication>
#include "nlogincontroller.h"
#include "user.h"
#include "collection.h"

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

//    QSqlQuery query;
//    query.exec("drop table Item");
//    query.exec("drop table User");
//    query.exec("drop table Channel");
//    query.exec("drop table Folder");
//    query.exec("drop table User");
//    query.exec("drop table Collection");
//
//    query.exec("CREATE TABLE User ("
//              "id INTEGER PRIMARY KEY AUTOINCREMENT,"
//              "name TEXT NOT NULL,"
//              "password TEXT NOT NULL,"
//              "autorefresh INTEGER NOT NULL,"
//              "startrefresh INTEGER NOT NULL,"
//              "readfilter INTEGER NOT NULL,"
//              "showabs INTEGER NOT NULL,"
//              "refreshtime INTEGER NOT NULL,"
//              "automark INTEGER NOT NULL,"
//              "savenumber INTEGER NOT NULL,"
//              "lastrefresh DATETIME NOT NULL)");
//
//    query.exec("CREATE TABLE Item ("
//              "id INTEGER PRIMARY KEY AUTOINCREMENT,"
//              "title TEXT NOT NULL,"
//              "link TEXT UNIQUE NOT NULL,"
//              "description TEXT NOT NULL,"
//              "author TEXT ,"
//              "pubdate DATE NOT NULL,"
//              "isread INTEGER DEFAULT 0,"
//              "channelid INTEGER NOT NULL)");
//
//   query.exec("create table Channel ("
//               "id integer primary key autoincrement,"
//               "title text not null,"
//               "url text not null,"
//               "parentid integer not null,"
//               "savenum integer not null,"
//               "userid integer not null,"
//               "readtime integer ,"
//               "readnum integer not null default 0)");
//
//    query.exec("create table Folder("
//               "id integer primary key autoincrement,"
//               "name text not null,"
//               "parentid integer ,"
//               "userid integer not null)");
//
//    query.exec("create table Collection("
//               "id integer primary key autoincrement,"
//               "name text not null,"
//               "link text not null,"
//               "userid integer not null,"
//               "parentid integer not null)");
//
//    User::createUser("", "");
//    Folder* f1 = Folder::createRootFolder("News", 1);
//    Folder* f2 = Folder::createRootFolder("Sports", 1);
//    Folder* f3 = Folder::createRootFolder("Blog", 1);
//    Folder* f11 = f1->createChildFolder("NativeNews");
//    Folder* f12 = f1->createChildFolder("WorldNews");
//    Folder* f21 = f2->createChildFolder("SinaSports");
//    Folder* f22 = f2->createChildFolder("SohuSports");
//    Folder* f31 = f3->createChildFolder("Lilu Blog");
//    Folder* f111 = f11->createChildFolder("NativeHubeiNews");
//
////    Channel channel1("TodayQuickNews","http://newsrss.bbc.co.uk/rss/newsonline_world_edition/front_page.xml",4,0,1,0,0);
////    Channel::insertChannel(channel1);
////    Channel channel2("TodayFastNews","http://rss.xinhuanet.com/rss/world.xml",4,0,1,0,0);
////    Channel::insertChannel(channel2);
////    //Channel channel3("TodayFortuneNews","http://rss.xinhuanet.com/rss/fortune.xml",4,0,1,0,0);
////    //Channel::insertChannel(channel3);
////    Channel channel4("TodaySportsNews","http://rss.xinhuanet.com/rss/sports.xml",4,0,1,0,0);
////    Channel::insertChannel(channel4);
////    //Channel channel5("TodayEntNews","http://rss.xinhuanet.com/rss/ent.xml",4,0,1,0,0);
////    //Channel::insertChannel(channel5);
////    Channel channel6("TodayMilNews","http://rss.xinhuanet.com/rss/mil.xml",4,0,1,0,0);
////    Channel::insertChannel(channel6);
////    Channel channel7("TodayITNews","http://rss.xinhuanet.com/rss/it.xml",4,0,1,0,0);
////    Channel::insertChannel(channel7);
////    Channel channel8("TodayScienceNews","http://rss.xinhuanet.com/rss/science.xml",4,0,1,0,0);
////    Channel::insertChannel(channel8);
////    Channel channel9("TodayEduNews","http://rss.xinhuanet.com/rss/edu.xml",4,0,1,0,0);
////    Channel::insertChannel(channel9);
////    Channel channel10("TodayPhotosNews","http://rss.xinhuanet.com/rss/photos.xml",4,0,1,0,0);
////    Channel::insertChannel(channel10);
////    Channel channel11("TodayLegalNews","http://rss.xinhuanet.com/rss/legal.xml",4,0,1,0,0);
////    Channel::insertChannel(channel11);
////    Channel channel12("TodayForumNews","http://rss.xinhuanet.com/rss/house.xml",4,0,1,0,0);
////    Channel::insertChannel(channel12);
////    Channel channel13("TodayFoodNews","http://rss.xinhuanet.com/rss/food.xml",4,0,1,0,0);
////    Channel::insertChannel(channel13);
////    Channel channel14("TodayEnglishNews","http://rss.xinhuanet.com/rss/english.xml",4,0,1,0,0);
////    Channel::insertChannel(channel14);
//
//    Collection *c1 = new Collection("article 1", "http://www.article1.com", 1, 1);
//    Collection *c2 = new Collection("article 2", "http://www.article2.com", 1, 1);
//    Collection *c3 = new Collection("article 3", "http://www.article3.com", 1, 2);
//    Collection *c4 = new Collection("article 4", "http://www.article4.com", 1, 2);
//    Collection *c5 = new Collection("article 5", "http://www.article5.com", 1, 2);
//    Collection *c6 = new Collection("article 6", "http://www.article6.com", 1, 3);
//    Collection *c7 = new Collection("article 7", "http://www.article7.com", 1, 3);
//    Collection *c8 = new Collection("article 8", "http://www.article8.com", 1, 4);
//    Collection *c9 = new Collection("article 9", "http://www.article9.com", 1, 4);
//    Collection *c10 = new Collection("article 10", "http://www.article10.com", 1, 5);
//    Collection *c11 = new Collection("article 11", "http://www.article11.com", 1, 5);
//    Collection *c12 = new Collection("article 12", "http://www.article12.com", 1, 5);
//       Collection::insertCollection(*c1);
//       Collection::insertCollection(*c2);
//       Collection::insertCollection(*c3);
//       Collection::insertCollection(*c4);
//       Collection::insertCollection(*c5);
//       Collection::insertCollection(*c6);
//       Collection::insertCollection(*c7);
//       Collection::insertCollection(*c8);
//       Collection::insertCollection(*c9);
//       Collection::insertCollection(*c10);
//       Collection::insertCollection(*c11);
//       Collection::insertCollection(*c12);

    return a.exec();
}
