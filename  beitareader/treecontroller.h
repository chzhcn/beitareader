#ifndef TREECONTROLLER_H
#define TREECONTROLLER_H
#include <QTreeWidgetItem>
#include <QTreeWidget>

#include "folder.h"
#include "channel.h"
#include "mytree.h"

class MyTree;

class TreeController
{
    friend class MyTree;
public:
    TreeController();


    void setupFolder(QTreeWidgetItem *item, QVector<Folder*> folders, QVector<Channel> channels);


    void initTree(MyTree *tree);
    void deleteFolderOrChannel(QTreeWidgetItem *item);
};

#endif // TREECONTROLLER_H
