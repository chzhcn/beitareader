#include "treecontroller.h"
#include "folder.h"
#include "channel.h"

TreeController::TreeController()
{

}

void TreeController::initTree(MyTree *tree)
{
    QVector<Folder*> folders = Folder::getAllFolder();
    for (int i = 0; i < folders.count(); i++)
    {
        int currentID = folders.at(i)->getFolderID();
        if (folders.at(i)->getParentID() == 0)
        {
            /*add top folder*/
            QTreeWidgetItem *item = new QTreeWidgetItem(tree, 1000);
            item->setText(0, folders.at(i)->getFolderName());
            item->setData(0, 1, currentID);
//            QMessageBox::about(0, "", QString::number(folders.at(i)->getFolderID()));

            QVector<Channel> channels = Channel::getChannelsByFolderID(currentID);
            QVector<Folder*> subFolders = folders.at(i)->getChildFolder();

            setupFolder(item, subFolders, channels);
        }
    }
}

void TreeController::setupFolder(QTreeWidgetItem *item, QVector<Folder*> folders, QVector<Channel> channels)
{
     /*add channels*/
     for (int j = 0; j < channels.count(); j++)
     {
         QTreeWidgetItem *channelItem = new QTreeWidgetItem(item, 1001);
         channelItem->setText(0, channels[j].getChannelTitle());
         channelItem->setData(0, 1, channels[j].getChannelID());
//         QMessageBox::about(0, "", QString::number(channels[j].getChannelID())+" "+QString::number(channelItem->type()));
     }

     /*add sub folders*/
     for (int k = 0; k < folders.count(); k++)
     {
         QTreeWidgetItem *folderItem = new QTreeWidgetItem(item, 1000);
         folderItem->setText(0, folders.at(k)->getFolderName());
         folderItem->setData(0, 1, folders.at(k)->getFolderID());
//         QMessageBox::about(0, "", QString::number(folders.at(k)->getFolderID()));

         QVector<Folder*> subFolders = folders.at(k)->getChildFolder();
         QVector<Channel> subChannels = Channel::getChannelsByFolderID(folders.at(k)->getFolderID());
         setupFolder(folderItem, subFolders, subChannels);
     }
 }

void deleteFolderOrChannel(QTreeWidgetItem *item)
{
    if(item->type()==1000)
    {
        Folder::deleteFolderByID(item->data(0, 1).toInt());
    }
    else if(item->type()==1001)
    {
        Channel::deleteChannelByChannelID(item->data(0,1).toInt());
    }
}





