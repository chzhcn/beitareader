#ifndef WEBCONTROLLER_H
#define WEBCONTROLLER_H

#include <QObject>
#include "beitareader.h"
#include "user.h"
#include "channel.h"
#include "webbrowser.h"

class WebController : public QObject        
{
    Q_OBJECT

public:
    ~WebController();
    WebController();
    WebController(BeitaReader *_main, User *_user);
    void createWebBrowser(int channelID);
    void subCreateWebBrowser(QVector<Item*> v);
    void InitializeBrowser();
private:
    BeitaReader *main;
    void connectSignalsAndSlots();
    ChannelArea* listTab;
    WebBrowser* webBrowser;
    QScrollArea *scrollArea;
    RSSWidget* rssWidget;
    QVector<Item*> v;
    int curChannelID;
    QVector<Feed*> f;
    User *user;

private slots:
    void handleReadAll();
    void handleRefresh();

public slots:
    void refreshWebBrowser(QTreeWidgetItem* treeItem, int);
    void refreshCurrentItems(int ,bool);

signals:
    void downRequest(int,bool);
//    void handleStarToggled(bool);
};

#endif // WEBCONTROLLER_H
