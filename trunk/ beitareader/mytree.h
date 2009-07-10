#ifndef MYTREE_H
#define MYTREE_H

#include <QtGui>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include "treecontroller.h"

class TreeController;

class MyTree : public QTreeWidget
{
    Q_OBJECT

public:
    MyTree(QWidget *parent = 0);
    ~MyTree();
//    enum QTreeWidgetItem::ItemType {FolderType = 1000, ChannelType = 1001};

protected:
    void dragEnterEvent(QDragEnterEvent *event){event->accept();}
    void dragMoveEvent(QDragMoveEvent *event){event->accept();}
    bool dropMimeData(QTreeWidgetItem *parent, int index, const QMimeData *data, Qt::DropAction action);
    QMimeData * mimeData(const QList<QTreeWidgetItem *> items) const;

private:
    QMenu *treeItemMenu;
    QMenu *treeBlankMenu;
    TreeController *controller;

//signals:
//    void constructTree(MyTree *);

private slots:
   void contextMenuEvent(const QPoint & pos);
   void on_item_doubleClicked(QTreeWidgetItem*,int);
   void rename_clicked();
   void delete_clicked();
};

#endif // MYTREE_H
