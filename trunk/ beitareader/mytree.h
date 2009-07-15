#ifndef MYTREE_H
#define MYTREE_H

#include <QtGui>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include "user.h"

class MyTree : public QTreeWidget
{
    Q_OBJECT

public:
    enum type {channel = 1001, folder = 1002};
    MyTree(QWidget *parent = 0);
    ~MyTree();
    void setUser(User *);

protected:
    void dragEnterEvent(QDragEnterEvent *event){event->accept();}
    void dragMoveEvent(QDragMoveEvent *event){event->accept();}
    bool dropMimeData(QTreeWidgetItem *parent, int index, const QMimeData *data, Qt::DropAction action);
    QMimeData * mimeData(const QList<QTreeWidgetItem *> items) const;

private:
    QMenu *treeFolderMenu;
    QMenu *treeChannelMenu;
    QMenu *treeBlankMenu;
    User *user;

signals:
    void downRequest(int,bool);
    void downAllRequest(bool);
    void constructTree(MyTree *);
    void deleteItem(QTreeWidgetItem*);
    void addChannelFromTree();
    void addFolderFromTree();
//    void addFolderFromTree(QTreeWidgetItem*);

private slots:
   void contextMenuEvent(const QPoint & pos);
   void on_item_doubleClicked(QTreeWidgetItem*,int);
   void rename_clicked();
   void delete_clicked();
   void update_clicked();
   void addChannel_clicked();
   void addFolder_clicked();
   void updateAll_clicked();
};

#endif // MYTREE_H
