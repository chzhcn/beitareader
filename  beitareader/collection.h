#ifndef COLLECTION_H
#define COLLECTION_H
#include <QString>
#include <QStringList>
#include <QSqlQuery>
#include <QVector>
#include <QDate>
#include <QtSql>
#include <QMessageBox>
class Collection
{
public:
    Collection(QString newName,QString newTitle,QString newLink,int newUserid);
    Collection();
    void setName(QString newName){name=newName;updateCollection(*this);}
    QString getName(){return name;}
    void setTitle(QString newTitle){title = newTitle;updateCollection(*this);}
    QString getTitle(){return title;}
    void setLink(QString newLink){link = newLink;updateCollection(*this);}
    QString getLink(){return link;}

    static void insertCollection(Collection& collection);
    static void deleteCollection(Collection& collection);
    static void deleteCollectionByID(int newCollectionID);
private:
    int id;
    QString name;
    QString title;
    QString link;
    int userid;
    void updateCollection(Collection& collection);
};

#endif // COLLECTION_H
