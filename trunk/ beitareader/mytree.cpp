#include "mytree.h"
#include <QtGui>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include "treecontroller.h"

MyTree::MyTree(QWidget *parent)
    : QTreeWidget(parent)
{
        setColumnCount(1);
        setHeaderLabel(" Channel list");
        setAcceptDrops( true );
        setDragEnabled(true);
        setContextMenuPolicy(Qt::CustomContextMenu);
        connect( this, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuEvent(const QPoint)));
        connect( this, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), this, SLOT(on_item_doubleClicked(QTreeWidgetItem*,int)));

        QAction * renameAct = new QAction(tr("Rename"), this);
        QAction * deleteAct = new QAction(tr("Delete"), this);
        QAction * updateAct = new QAction(tr("Update This Channel"), this);
        QAction * addChannelAct = new QAction(tr("Add Channel"), this);
        QAction * addFolderAct = new QAction(tr("Add Folder"), this);
        QAction * updateAllAct = new QAction(tr("Update All Channels"), this);

        connect(renameAct, SIGNAL(triggered()), this, SLOT(rename_clicked()));
        connect(deleteAct, SIGNAL(triggered()), this, SLOT(delete_clicked()));
        connect(updateAct, SIGNAL(triggered()), this, SLOT(update_clicked()));
        connect(addChannelAct, SIGNAL(triggered()), this, SLOT(addChannel_clicked()));
        connect(addFolderAct, SIGNAL(triggered()), this, SLOT(addFolder_clicked()));
        connect(updateAllAct, SIGNAL(triggered()), this, SLOT(updateAll_clicked()));

        treeFolderMenu = new QMenu;
        treeFolderMenu->addAction(renameAct);
        treeFolderMenu->addAction(deleteAct);
        treeFolderMenu->addAction(addFolderAct);
        treeFolderMenu->addAction(addChannelAct);

        treeChannelMenu = new QMenu;
        treeChannelMenu->addAction(updateAct);
        treeChannelMenu->addAction(deleteAct);
        treeChannelMenu->addAction(renameAct);

        treeBlankMenu = new QMenu;
        treeBlankMenu->addAction(addFolderAct);
        treeBlankMenu->addAction(updateAllAct);
}

MyTree::~MyTree()
{

}

bool MyTree::dropMimeData(QTreeWidgetItem *parent, int index, const QMimeData *data, Qt::DropAction action)
{
     bool flag = true;
     QTreeWidgetItem *item = parent;
    while ((this->indexFromItem(item)) != this->rootIndex())
    {
        if (item == currentItem())
        {
            flag = false;
            QCursor cursor;
            cursor.setShape(Qt::ForbiddenCursor);
            break;
        }
        else
        {
            item = item->parent();
        }
    }
    if (flag)
    {
        if(parent)
        {
            QString str=data->text();
            QTreeWidgetItem *item = currentItem()->clone();
            parent->addChild(item);
            if(currentItem()->type() == folder)
            {
                Folder::getFolderByID(currentItem()->data(0, 1).toInt())->
                        setParentFolder(Folder::getFolderByID(parent->data(0,1).toInt()));
            }
            else if(currentItem()->type() == channel)
            {
                Channel::getChannelByChannelID(currentItem()->data(0,1).toInt())->
                        setChannelParentid(parent->data(0, 1).toInt());
            }
            delete currentItem();
        }
        return true;
    }
    else
    {
        return false;
    }
}

QMimeData *MyTree::mimeData(const QList<QTreeWidgetItem *> items) const
{
   QMimeData * mimeData = new QMimeData;
   QString str="";
   for(int i = 0; i < items.size(); i++)
   {
       str+=items.at(i)->text(0);
   }
   mimeData->setText(str);

    return mimeData;
}

void MyTree::contextMenuEvent(const QPoint &pos)
{
    if (this->itemAt(pos))
    {
        if(this->itemAt(pos)->type() == folder)
        {
            treeFolderMenu->exec(QCursor::pos());
        }
        else if(this->itemAt(pos)->type() == channel)
        {
            treeChannelMenu->exec(QCursor::pos());
        }
    }
    else
    {
        treeBlankMenu->exec(QCursor::pos());
    }

}

void MyTree::on_item_doubleClicked(QTreeWidgetItem *item, int column)
{
        item->setFlags(item->flags() | Qt::ItemIsEditable);
        editItem(item, 0);
}

void MyTree::rename_clicked()
{
    currentItem()->setFlags(currentItem()->flags() | Qt::ItemIsEditable);
    editItem(currentItem(), 0);
}

void MyTree::delete_clicked()
{
    QTreeWidgetItem *item = currentItem();
    emit deleteItem(item);
    delete item;
}

void MyTree::update_clicked()
{
    int i = currentItem()->data(0, 1).toInt();
    emit downRequest(i, true);
}

void MyTree::updateAll_clicked()
{
    emit downAllRequest(true);
}

void MyTree::addChannel_clicked()
{
        emit addChannelFromTree();
}

void MyTree::addFolder_clicked()
{
    emit addFolderFromTree();
}

void MyTree::setUser(User *_user)
{
    user = _user;
}






