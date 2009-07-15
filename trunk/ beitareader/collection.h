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
    Collection(QString newName,QString newLink,int newUserid,int newParentId);
    Collection();
    void setName(QString newName){name=newName;updateCollection(*this);}
    QString getName(){return name;}
    void setLink(QString newLink){link = newLink;updateCollection(*this);}
    QString getLink(){return link;}
    void setParentId(int newparentid){parentid = newparentid;updateCollection(*this);}
    int getParentId(){return parentid;}
    int getId(){return id;}

    static void insertCollection(Collection& collection);
    static void deleteCollection(Collection& collection);
    static void deleteCollectionByID(int newCollectionID);
    static QVector<Collection*> getCollectionsByParentID(int parentID, int userID);
    static Collection *getCollectionByID(int newID);

private:
    int id;
    QString name;
    QString link;
    int parentid;
    int userid;
    void updateCollection(Collection& collection);
};

#endif // COLLECTION_H
