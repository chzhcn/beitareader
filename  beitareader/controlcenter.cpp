#include "controlcenter.h"

ControlCenter::ControlCenter()
{
}

ControlCenter::ControlCenter(BeitaReader *_main, User* u)
{
    main=_main;
    user=u;
    menuController = new MenuToolBarController(_main, u);
    groupController = new GroupController(_main, u);
    treeController = new TreeController(_main, u);
    webController = new WebController(_main, u);
    downloadController = new DownloadController(_main, u);

    connect(menuController,SIGNAL(downloadRequest(bool)),
            downloadController,SLOT(downloadAllChannelUpdates(bool)));
    connect(downloadController,SIGNAL(currentChannelRefresh(int, bool)),
            webController,SLOT(refreshCurrentItems(int,bool)));
    connect(webController,SIGNAL(downRequest(int,bool)),
            downloadController,SLOT(downloadCurrentChannelUpdate(int,bool)));
    connect(downloadController,SIGNAL(downloadDone()),
            groupController,SLOT(DownloadDoneRefresh()));
}

ControlCenter::~ControlCenter()
{
}
