#ifndef FOLDER_H
#define FOLDER_H
#include "channel.h"
class Folder
{
public:
    Folder(QString newName, int newParentid, int newUserid);
    Folder();
    //Folder& operator = (const Folder& other);
    //Folder(const Folder& other);

    int getFolderID(){return id;}
    Folder* createChildFolder(QString folderName);
    QVector<Folder*> getChildFolder(){return folderVector;}

    void setFolderName(QString newFolderName);
    QString getFolderName(){return name;}
    void setParentFolder(Folder* thisParentFolder);
    QString getParentFolderName(){return this->parentFolder->name;}
    int getParentID(){return parentid;}

    static Folder* createRootFolder(QString folderName,int newUserid);
    static QVector<Folder*> getAllFolder();
    static Folder* getFolderByID(int newID);
    static void deleteFolderByID(int folderID);
private:
    int id;
    QString name;
    int parentid;
    int userid;
    QVector<Folder*> folderVector;
    Folder* parentFolder;

    void updateFolder(Folder* );
    static void deleteFolder(Folder* folder);
};

#endif // FOLDER_H
