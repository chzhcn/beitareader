#ifndef RSSWIDGET_H
#define RSSWIDGET_H

#include <QWidget>
#include "feed.h"
#include <QVBoxLayout>
#include <QVector>

class RSSWidget : public QWidget
{
    Q_OBJECT
public:
    RSSWidget();
    RSSWidget(QVector<Feed*> feedVector, QWidget *parent = 0);
    virtual ~RSSWidget();
private:
    QVBoxLayout *vLayout;
    QVector<Item*> itemVector;
};

#endif // RSSWIDGET_H
