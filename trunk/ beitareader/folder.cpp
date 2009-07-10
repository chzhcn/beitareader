#include "folder.h"
Folder::Folder(QString newName, int newParentid, int newUserid)
{
    name = newName;
    parentid = newParentid;
    userid = newUserid;
    parentFolder = NULL;
}
Folder::Folder()
{
}

/*Folder& Folder::operator = (const Folder& other)
{
    if(this == other)
    {
        return *this;
    }

}*/

//创建根文件夹
Folder* Folder::createRootFolder(QString folderName,int newUserid)
{
    QSqlQuery query;
    query.prepare("select * from Folder where parentid = :parentid");
    query.bindValue(":parentid",0);
    query.exec();
    while(query.next())
    {
        if(query.value(1).toString()==folderName)
        {
            QMessageBox::about(0,"Error",QString::fromLocal8Bit("已经存在相同名字的根文件夹！"));
            return NULL;
        }
    }
    query.prepare("insert into Folder(name,parentid,userid) values(:name,:parentid,:userid)");
    query.bindValue(":name", folderName);
    query.bindValue(":parentid", 0);
    query.bindValue(":userid", newUserid);
    query.exec();
    Folder* f = new Folder(folderName,0,newUserid);
    f->id = query.lastInsertId().toInt();
    return f;
}

//创建子文件夹
Folder* Folder::createChildFolder(QString folderName)
{
    QSqlQuery query;
    query.prepare("select * from Folder where parentid = :parentid");
    query.bindValue(":parentid",id);
    query.exec();
    while(query.next())
    {
        if(query.value(1).toString()==folderName)
        {
            QMessageBox::about(0,"Error",QString::fromLocal8Bit("在此文件夹中已经存在同名的子文件夹！"));
            return NULL;
        }
    }
    query.prepare("insert into Folder(name,parentid,userid) values(:name,:parentid,:userid)");
    query.bindValue(":name", folderName);
    query.bindValue(":parentid", id);
    query.bindValue(":userid", userid);
    query.exec();
    Folder* f = new Folder(folderName,id,userid);
    f->id = query.lastInsertId().toInt();
    f->parentFolder = this;
    folderVector.append(f);
    return f;
}

//更新Folder
void Folder::updateFolder(Folder* folder)
{
    QSqlQuery query;
    query.prepare("update Folder set name = :name,parentid = :parentid,userid=:userid where id=:id");
    query.bindValue(":name", folder->name);
    query.bindValue(":parentid", folder->parentid);
    query.bindValue(":userid",folder->userid);
    query.bindValue(":id",folder->id);
    query.exec();

}
void Folder::setFolderName(QString newFolderName)
{
    name = newFolderName;
    updateFolder(this);
}

//设置父文件夹
void Folder::setParentFolder(Folder* thisParentFolder)
{
    QSqlQuery query;
    query.prepare("update Folder set parentid = :parentid where id = :id");
    query.bindValue(":parentid",thisParentFolder->id);
    query.bindValue(":id",id);
    query.exec();
    thisParentFolder->folderVector.append(this);
    for(int i = 0; i < this->parentFolder->folderVector.count(); i++)
    {
        if(this->parentFolder->folderVector.at(i) == this)
            this->parentFolder->folderVector.remove(i);
    }
    this->parentFolder = thisParentFolder;
    this->parentid = thisParentFolder->id;
}

//删除文件夹及其子文件夹
void Folder::deleteFolder(Folder* folder)
{
    if(folder->getChildFolder().count() != 0)
    {
        for(int i = 0; i < folder->getChildFolder().count(); i++)
        {
            Folder* f = folder->getChildFolder().at(i);
            Folder::deleteFolder(f);
        }
    }
    QSqlQuery query;
    query.prepare("delete from Folder where id = :id");
    query.bindValue(":id",folder->id);
    query.exec();
    query.prepare("delete from Channel where parentid = :parentid");
    query.bindValue(":parentid",folder->id);
    query.exec();
}

//获得所有文件夹
QVector<Folder*> Folder::getAllFolder()
{
    QVector<Folder*> v;
    QSqlQuery query;
    query.exec("select * from Folder");
    while(query.next())
    {
        Folder* f = new Folder(query.value(1).toString(),query.value(2).toInt(),query.value(3).toInt());
        f->id = query.value(0).toInt();
        v.append(f);
    }
    for(int i = 0; i < v.count(); i++)
    {
        if(v.at(i)->parentid == 0)
            v.at(i)->parentFolder = NULL;
        else
        {
            for(int j = 0; j < v.count(); j++)
            {
                if(v.at(i)->parentid == v.at(j)->id)
                {
                    v.at(i)->parentFolder = v.at(j);
                    v.at(j)->folderVector.append(v.at(i));
                }
            }
        }
    }
    return v;
}

//通过ID获得文件夹
Folder* Folder::getFolderByID(int newID)
{
    QVector<Folder*> v = Folder::getAllFolder();
    for(int i = 0; i < v.count(); i++)
    {
        if(v.at(i)->id == newID)
            return v.at(i);
    }
    return NULL;
}

void Folder::deleteFolderByID(int folderID)
{
    Folder* f = Folder::getFolderByID(folderID);
    Folder::deleteFolder(f);
}
