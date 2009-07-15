#ifndef COLLECTIONTAB_H
#define COLLECTIONTAB_H

#include <QtGui/QWidget>
#include <QToolBox>
#include <QMenu>
#include <QListWidgetItem>
#include <QListWidget>

namespace Ui {
    class CollectionTab;
}

class CollectionTab : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(CollectionTab)
public:
    explicit CollectionTab(QWidget *parent = 0);
    virtual ~CollectionTab();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::CollectionTab *m_ui;
    QToolBox *collectionList;
    QMenu *menu;

private slots:
   void contextMenuEvent(const QPoint & pos);
   void itemDoubleClicked(QListWidgetItem *);
   void rename_clicked();
   void delete_clicked();
   void handleRenameFinished(QListWidgetItem *);
};

#endif // COLLECTIONTAB_H
