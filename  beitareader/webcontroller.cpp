#include "webcontroller.h"

WebController::WebController()
{
}

WebController::WebController(BeitaReader *_main, User *_user)
{
    main = _main;
    user = _user;

    webBrowser = main->ui->webWidget;
    listTab = webBrowser->ui()->listTab;
    scrollArea = listTab->ui()->scrollArea;

    InitializeBrowser();
    connectSignalsAndSlots();
}

void WebController::InitializeBrowser()
{
    int favID = Channel::getFavouriteChannelByUserID(user->getUserID());
    //QMessageBox::about(0,"",QString::number(favID));
    if (favID != 0)
    {
        createWebBrowser(favID);
        curChannelID = favID;
    }
}

void WebController::connectSignalsAndSlots()
{
    connect(main->myTree, SIGNAL(itemClicked(QTreeWidgetItem*,int)),
            this, SLOT(refreshWebBrowser(QTreeWidgetItem*,int)));
    connect(listTab->ui()->readAllButton, SIGNAL(clicked()), this, SLOT(handleReadAll()));
    connect(listTab->ui()->refreshButton, SIGNAL(clicked()), this, SLOT(handleRefresh()));
}

void WebController::createWebBrowser(int channelID)
{
    if (!f.isEmpty())
    {
        for (int i = 0; i < f.count(); i++)
            delete f.at(i);
        f.clear();
    }
    if (!v.isEmpty())
    {
        for (int i = 0; i < v.count(); i++)
            delete v.at(i);
        v.clear();
    }



    v = Item::getItemsByChannelID(channelID);
    subCreateWebBrowser(v);

}

void WebController::subCreateWebBrowser(QVector<Item*> v)
{
    int num =  v.count();
    for (int i = 0; i < num; i++)
    {
        Feed *feed = new Feed(v.at(i));
        f.append(feed);
    }


    rssWidget = new RSSWidget(f);
    scrollArea->setWidget(rssWidget);

    scrollArea->viewport()->setAutoFillBackground(true);
    scrollArea->setWidgetResizable(true);
    scrollArea->setFocusPolicy(Qt::NoFocus);
    scrollArea->setFrameStyle(QFrame::NoFrame);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void WebController::refreshWebBrowser(QTreeWidgetItem* treeItem, int)
{
    if (treeItem->type() == MyTree::channel)
    {
        webBrowser->ui()->tabWidget->setTabText(0, treeItem->text(0));
        curChannelID = treeItem->data(0, 1).toInt();
        createWebBrowser(curChannelID);
    }
}

void WebController::handleReadAll()
{
    if (!f.isEmpty())
    {
        for (int i = 0; i < f.count(); i++)
            f.at(i)->getItem()->setIsread(1);
    }
}

void WebController::handleRefresh()
{
    emit downRequest(curChannelID, true);
}

WebController::~WebController()
{

}

void WebController::refreshCurrentItems(int channelid ,bool autorefresh)
{
    QString auto1 = "false";
    if(autorefresh)
        auto1 = "true";
    //QMessageBox::about(0,QString::number(channelid),auto1);
    if ((channelid == curChannelID) && autorefresh )
    {
        createWebBrowser(channelid);
    }
}
