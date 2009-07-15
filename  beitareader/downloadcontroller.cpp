#include "downloadcontroller.h"

DownloadController::DownloadController()
{
}

DownloadController::DownloadController(BeitaReader *_main, User *_user)
{
    main = _main;
    user = _user;
    index = -1;
    busy = false;
    p = new ParseXml(1, QUrl("http://rss.xinhuanet.com/rss/native.xml"));

    connect(main->myTree,SIGNAL(downRequest(int, bool)),
            this,SLOT(downloadCurrentChannelUpdate(int, bool)));
    connect(main->myTree,SIGNAL(downAllRequest(bool)),
            this,SLOT(downloadAllChannelUpdates(bool)));
    connect(p,SIGNAL(isRefreshDone(bool)),
            this,SLOT(getChannelRefreshDone(bool)));
}

void DownloadController::downloadAllChannelUpdates(bool autoRefresh)
{
    v = Channel::getChannelsByUserID(user->getUserID());
    if((!busy) && (v.count() != 0))
    {
        busy = true;
        curAutoRefresh = autoRefresh;

        index = 0;
        changeCurrentChannel(v.at(0));

        startDownload();
        p->fetch();
    }
    else if(busy)
    {
        QMessageBox::about(0,"Warning","Downloading Already Started!");
    }
    else
    {
        QMessageBox::about(0,"Warning","You have no channels now!");
    }
}

void DownloadController::downloadCurrentChannelUpdate(int channelID, bool autoRefresh)
{
    if(!busy)
    {
        busy = true;
        changeCurrentChannel(Channel::getChannelByChannelID(channelID));
        curAutoRefresh = autoRefresh;

        startDownload();
        p->fetch();
    }
    else
    {
        QMessageBox::about(0,"Warning","Downloading Already Started!");
    }
}

void DownloadController::getChannelRefreshDone(bool success)
{
    emit currentChannelRefresh(curChannel->getChannelID(), curAutoRefresh);

    if(success)
    {
        //QMessageBox::about(0,"","1");
        main->ui->statusBar->showMessage(curChannel->getChannelTitle()+" download succeed");
    }
    else
    {
        //QMessageBox::about(0,"","1");
        main->ui->statusBar->showMessage(curChannel->getChannelTitle()+" download timeout");
    }

    if(index == -1)
    {
        //QMessageBox::about(0,"","2");
        busy = false;
    }
    else
    {
        //QMessageBox::about(0,"","2");
        wakeUpNext();
    }
}

void DownloadController::startDownload()
{
    main->ui->statusBar->showMessage(curChannel->getChannelTitle()+" downloading...");
}

void DownloadController::finishAllDownloads()
{
    main->ui->statusBar->showMessage("All Channels Updated!", 30000);
}

void DownloadController::wakeUpNext()
{
    index++;
    if(index < v.count())
    {
        changeCurrentChannel(v.at(index));
        startDownload();
        p->fetch();
    }
    else
    {
        //QMessageBox::about(0,"","3");
        busy = false;
        index = -1;
        finishAllDownloads();
        emit downloadDone();
    }
}

void DownloadController::changeCurrentChannel(Channel *c)
{
    curChannel = c;
    p->setChannelID(c->getChannelID());
    p->setUrl(QUrl(c->getChannelUrl()));
}
