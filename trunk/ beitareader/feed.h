#ifndef FEED_H
#define FEED_H

#include <QtGui/QWidget>
#include <QLabel>
#include <QCheckBox>
#include <QTextBrowser>
#include "item.h"
#include <QString>
#include "collection.h"
#include "ui_feed.h"

namespace Ui {
    class Feed;
}

//class Item;
//
//class Collection;

class Feed : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(Feed)

    enum BOOL{f = 0, t = 1};
public:
    explicit Feed(QWidget *parent = 0);
//    explicit Fedd(QString title, QString abstract, QWidget *parent = 0);
    explicit Feed(Item *item, QWidget *parent = 0);
    virtual ~Feed();
    Ui::Feed* ui();
    Item* getItem();
protected:
    virtual void changeEvent(QEvent *e);
private slots:
    void handleStarToggled(int isChecked);
    void handleUnreadToggled(int isChecked);

private:
    Ui::Feed *m_ui;
    Item *item;
    QString *html;
//    QString& toHtml(const QString &link, const QString &title);
    QLabel *titleLabel;
    QLabel *timeLabel;
    QCheckBox *starCheckBox;
    QCheckBox *unreadCheckBox;
    QTextBrowser *textBrowser;
//    QString *title;
//    QString *abstract;
};

#endif // FEED_H
