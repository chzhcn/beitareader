#ifndef ITEM_H
#define ITEM_H
#include <QString>
#include <QStringList>
#include <QSqlQuery>
#include <QVector>
#include <QDate>
#include <QtSql>
#include <QMessageBox>
class Item
{
public:
    Item(QString newTitle, QString newLink , QString newDescription ,
         QString newAuthor , QDate newPubdate, int newIsread,int newChannelid);
    Item();

    /*静态方法*/
    static void insertItem(Item& );
    static void deleteItem(Item& );
    static QVector<Item> selectNotRead();
    static QVector<Item> selectIsRead();
    static QVector<Item> searchByAuthor(QString& );
    static QVector<Item> searchByTitle(QString& );
    static QVector<Item> searchByDescription(QString& );
    static QVector<Item> searchByLink(QString& );
    static QVector<Item> searchByPubdate(QDate& date1, QDate& date2);
    static QVector<Item> getItemsByChannelID(int newChannelID);
    //属性的set与get方法
    void setTitle(QString& newTitle){title = newTitle;updateItem(*this);}
    QString getTitle(){return title;}
    void setLink(QString& newLink){link = newLink;updateItem(*this);}
    QString getLink(){return link;}
    void setDescription(QString& newDescription){description = newDescription;updateItem(*this);}
    QString getDescription(){return description;}
    void setAuthor(QString& newAuthor){author = newAuthor;updateItem(*this);}
    QString getAuthor(){return author;}
    void setPubdate(QDate& newPubdate){pubdate = newPubdate;updateItem(*this);}
    QDate getPubdate(){return pubdate;}
    void setIsread(int newIsread){isread = newIsread;updateItem(*this);}
    int getIsread(){return isread;}
    //void setChannelid(int newChannelid){channelid = newChannelid;updateItem(*this);}
    //int getChannelid(){return channelid;}

private:
    int id;
    QString title;
    QString link;
    QString description;
    QString author;
    QDate pubdate;
    int isread;
    int  channelid;
    static QVector<Item> vectorOfItem(QSqlQuery&);
    static void updateItem(Item& );
};

#endif // ITEM_H
