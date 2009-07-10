#include "mytree.h"
#include <QtGui>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include "treecontroller.h"

MyTree::MyTree(QWidget *parent)
    : QTreeWidget(parent)
{

        controller = new TreeController;
        controller->initTree(this);
//        emit constructTree(this);
        setColumnCount(1);
        setHeaderLabel(" Channel list");
        setAcceptDrops( true );
        setDragEnabled(true);
        setContextMenuPolicy(Qt::CustomContextMenu);
        connect( this, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuEvent(const QPoint)));
        connect( this, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), this, SLOT(on_item_doubleClicked(QTreeWidgetItem*,int)));

        treeItemMenu = new QMenu;
        QAction * renameAct = new QAction(tr("Rename"), treeItemMenu);
        QAction * deleteAct = new QAction(tr("Delete"), treeItemMenu);
        treeItemMenu->addAction( renameAct);
        treeItemMenu->addAction( deleteAct);
        connect(renameAct, SIGNAL(triggered()), this, SLOT(rename_clicked()));
        connect(deleteAct, SIGNAL(triggered()), this, SLOT(delete_clicked()));
        treeBlankMenu = new QMenu;
        QAction * addChannelAct = new QAction(tr("Add Channel"), treeBlankMenu);
        QAction * addFolderAct = new QAction(tr("Add Folder"), treeBlankMenu);
        treeBlankMenu->addAction(addChannelAct);
        treeBlankMenu->addAction(addFolderAct);
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
//        if(action==Qt::MoveAction)
        QString str=data->text();
        QTreeWidgetItem *item = currentItem()->clone();
        parent->addChild(item);
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

//    connect(addChannelAct, SIGNAL(triggered()), this, SLOT(
    if(this->itemAt(pos))
    {
        treeItemMenu->exec(QCursor::pos());
    }
    else
    {
        treeBlankMenu->exec(QCursor::pos());
    }

}

void MyTree::on_item_doubleClicked(QTreeWidgetItem *item, int column)
{
    //需要判断item的类型，如果是channel则不能编辑
    item->setFlags(item->flags() | Qt::ItemIsEditable);
//    openPersistentEditor(item, 0);
    editItem(item, 0);
}

void MyTree::rename_clicked()
{
    //需要判断item类型，如果是channel则右键菜单里没有rename
    currentItem()->setFlags(currentItem()->flags() | Qt::ItemIsEditable);
    editItem(currentItem(), 0);
}

void MyTree::delete_clicked()
{
    if(currentItem()->childCount()!=0)
    {
        QMessageBox::StandardButton ret;
         ret = QMessageBox::warning(this, tr("Delete"),
                      tr("Do you want to delete all the sub items?"),
                      QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
         if (ret == QMessageBox::No)
         {
                for(int i = 0; i < currentItem()->childCount(); i++)
                {
                    QTreeWidgetItem *item = currentItem()->child(i)->clone();
                    currentItem()->parent()->addChild(item);
                }
                delete currentItem();
            }
         else if (ret == QMessageBox::Yes)
         {
             delete currentItem();
         }
     }
    else
    {
        QTreeWidgetItem *item = currentItem();
//        controller->deleteFolderOrChannel(item);
        delete item;
    }
}


