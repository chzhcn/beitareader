#ifndef DOWNLOADCONTROLLER_H
#define DOWNLOADCONTROLLER_H

#include <QObject>
#include "user.h"
#include "beitareader.h"
#include "channel.h"
#include "parsexml.h"
//#include "downloadthread.h"

class DownloadController : public QObject
{
    Q_OBJECT

public:
    DownloadController();
    DownloadController(BeitaReader *_main, User *_user);

private:
    BeitaReader *main;
    User *user;
    Channel *curChannel;
    bool curAutoRefresh;
    ParseXml *p;
    int index;
    QVector<Channel*> v;
    bool busy;
    void changeCurrentChannel(Channel*);
    void wakeUpNext();

signals:
    void currentChannelRefresh(int, bool);
    void downloadDone();

public slots:
    void downloadAllChannelUpdates(bool AutoRefresh);
    void downloadCurrentChannelUpdate(int channelID, bool AutoRefresh);
    void getChannelRefreshDone(bool);
    void startDownload();
    void finishAllDownloads();
};

#endif // DOWNLOADCONTROLLER_H
