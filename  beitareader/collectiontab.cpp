#include "collectiontab.h"
#include "collection.h"
#include "ui_collectiontab.h"
#include <QListWidget>

CollectionTab::CollectionTab(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::CollectionTab)
{
    m_ui->setupUi(this);
    m_ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    collectionList = new QToolBox;
    m_ui->scrollArea->setWidget(collectionList);
    collectionList->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
//    collectionList->setContextMenuPolicy(Qt::CustomContextMenu);
    menu = new QMenu;
    QAction *renameAct = new QAction("Rename", this);
    QAction *deleteAct = new QAction("Delete", this);
    menu->addAction(renameAct);
    menu->addAction(deleteAct);
    connect(renameAct, SIGNAL(triggered()), this, SLOT(rename_clicked()));
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(delete_clicked()));




    const int groupsNum = 5;
    for (int i = 0; i < groupsNum; i++)
    {
        QListWidget *subList = new QListWidget();
        subList->setContextMenuPolicy(Qt::CustomContextMenu);
        subList->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        QVector<Collection*> groupCollection = Collection::getCollectionsByParentID((i+1),1);
        for(int j = 0; j < groupCollection.count(); j++)
        {
//            QMessageBox::about(0, "Group","Group"+QString::number(i+1)+ ":id"+QString::number(groupCollection.at(j)->getId()));
            QListWidgetItem *item = new QListWidgetItem(subList, 1000+i);
            item->setText(groupCollection.at(j)->getName());
            item->setData(1, groupCollection.at(j)->getId());
            item->setFlags(item->flags() | Qt::ItemIsEditable);
        }
        collectionList->addItem(subList, "Group "+QString::number(i+1));
        connect( subList, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuEvent(const QPoint)));
//        connect( subList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(on_item_doubleClicked(QListWidgetItem*)));
       connect(subList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(itemDoubleClicked(QListWidgetItem*)));
        connect( subList, SIGNAL(itemChanged(QListWidgetItem*)), this, SLOT(handleRenameFinished(QListWidgetItem*)));
//        collectionList->adjustSize();

    }


}

CollectionTab::~CollectionTab()
{
    delete m_ui;
}

void CollectionTab::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void CollectionTab::contextMenuEvent(const QPoint &pos)
{
    if(((QListWidget*)(collectionList->currentWidget()))->itemAt(pos))
    {
        menu->exec(QCursor::pos());
    }
}

void CollectionTab::itemDoubleClicked(QListWidgetItem *item)
{
//    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ((QListWidget*)(collectionList->currentWidget()))->editItem(item);
}

void CollectionTab::rename_clicked()
{
    QListWidgetItem *item = ((QListWidget*)(collectionList->currentWidget()))->currentItem();
//    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ((QListWidget*)(collectionList->currentWidget()))->editItem(item);
}

void CollectionTab::delete_clicked()
{
    QListWidgetItem *item = ((QListWidget*)(collectionList->currentWidget()))->currentItem();
    Collection::deleteCollectionByID(item->data(1).toInt());
    delete item;
    item = NULL;
}

void CollectionTab::handleRenameFinished(QListWidgetItem *item)
{
    Collection *collection = Collection::getCollectionByID(item->data(1).toInt());
    Collection::getCollectionByID(item->data(1).toInt())->setName(item->text());
}
