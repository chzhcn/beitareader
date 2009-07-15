#ifndef RSSSCROLLAREA_H
#define RSSSCROLLAREA_H

#include <QtGui/QScrollArea>
#include <QVBoxLayout>
#include "feed.h"
#include <QVector>
#include "ui_rssscrollarea.h"

namespace Ui {
    class RSSScrollArea;
}

//class Feed;
//class Item;

class RSSScrollArea : public QScrollArea {
    Q_OBJECT
    Q_DISABLE_COPY(RSSScrollArea)
public:
    explicit RSSScrollArea(QWidget *parent = 0);
//    explicit RSSScrollArea(int channelID, QWidget *parent = 0);
    explicit RSSScrollArea(QVector<Item*> itemVector, QWidget *parent = 0);
    virtual ~RSSScrollArea();
    Ui::RSSScrollArea* ui();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::RSSScrollArea *m_ui;
    QVBoxLayout *vLayout;
//    QList<Feed*>* feedList;
    QVector<Item*> itemVector;

};

#endif // RSSSCROLLAREA_H
