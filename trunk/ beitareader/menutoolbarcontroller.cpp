#include "menutoolbarcontroller.h"

MenuToolBarController::MenuToolBarController()
{
}

MenuToolBarController::MenuToolBarController(BeitaReader* _main, User* u)
{
    main=_main;
    user=u;
    this->bindSignalAndSlot();
}

void MenuToolBarController::bindSignalAndSlot()
{
    connect(main->ui->addChannelAction,SIGNAL(triggered()),this,SLOT(addChannelDialog()));
    connect(main->ui->addChannelFolderAction,SIGNAL(triggered()),this,SLOT(addFolderDialog()));
    connect(main->ui->searchAction,SIGNAL(triggered()),this,SLOT(searchArticle()));
    connect(main->ui->exitAction,SIGNAL(triggered()),main,SLOT(close()));
    connect(main->ui->switchFullScreenAction,SIGNAL(triggered(bool)),this,SLOT(fullScreen(bool)));
    connect(main->ui->switchToolBarAction,SIGNAL(triggered(bool)),this,SLOT(showToolBar(bool)));
    connect(main->ui->switchStatusBarAction,SIGNAL(triggered(bool)),this,SLOT(showStatusBar(bool)));
    connect(main->ui->settingsAction,SIGNAL(triggered()),this,SLOT(settingsDialog()));
    connect(main->ui->updateAction,SIGNAL(triggered()),this,SLOT(updateAllChannels()));
}

void MenuToolBarController::addChannelDialog()
{
    AddChannelDialog *a=new AddChannelDialog(0, main);
    a->show();
}

void MenuToolBarController::addFolderDialog()
{
    AddFolderDialog *a=new AddFolderDialog(0, main);
    a->show();
}

void MenuToolBarController::searchArticle()
{
    main->ui->tabWidget->setCurrentIndex(2);
}

void MenuToolBarController::updateAllChannels()
{
    emit downloadRequest(true);
}

void MenuToolBarController::showStatusBar(bool isShown)
{
    if(isShown)
    {
        main->ui->statusBar->show();
    }
    else
    {
        main->ui->statusBar->hide();
    }
}

void MenuToolBarController::showToolBar(bool isShown)
{
    if(isShown)
    {
        main->ui->mainToolBar->show();
    }
    else
    {
        main->ui->mainToolBar->hide();
    }
}

void MenuToolBarController::fullScreen(bool isShown)
{
    if(isShown)
    {
        main->showFullScreen();
    }
    else
    {
        main->showNormal();
    }
}

void MenuToolBarController::settingsDialog()
{
    int rtimeindex = 0;
    int snumber = 0;

    switch (user->getRefreshTime())
    {
        case 15:
            rtimeindex=0;
            break;
        case 30:
            rtimeindex=1;
            break;
        case 60:
            rtimeindex=2;
            break;
        case 120:
            rtimeindex=3;
            break;
        case 240:
            rtimeindex=4;
            break;
        case 360:
            rtimeindex=5;
            break;
        case 720:
            rtimeindex=6;
            break;
        case 1440:
            rtimeindex=7;
            break;
    }

    switch (user->getSaveNumber())
    {
        case 50:
            snumber=0;
            break;
        case 80:
            snumber=1;
            break;
        case 100:
            snumber=2;
            break;
        case 150:
            snumber=3;
            break;
        case 200:
            snumber=4;
            break;
    }
    
    SettingsDialog *sd = new SettingsDialog(main);
    sd->setPassword(user->getPassword());
    sd->ui()->abstractNoradioButton->setChecked((user->getShowAbstract()==0));
    sd->ui()->abstractYesradioButton->setChecked((user->getShowAbstract()==1));
    sd->ui()->autoMarkcheckBox->setChecked((user->getAutoMark()==1));
    sd->ui()->autoRefreshcheckBox->setChecked((user->getAutoRefresh()==1));
    sd->ui()->filterNoradioButton->setChecked((user->getReadFilter()==0));
    sd->ui()->filterYesradioButton->setChecked((user->getReadFilter()==1));
    sd->ui()->refreshTimecomboBox->setCurrentIndex(rtimeindex);
    sd->ui()->saveNumbercomboBox->setCurrentIndex(snumber);
    sd->ui()->startRefreshcheckBox->setChecked((user->getStartRefresh()==1));

    sd->show();

    connect(sd,SIGNAL(finalInfo(QString,int,int,int,int,int,int)),this,SLOT(setUserInfo(QString,int,int,int,int,int,int)));
}

void MenuToolBarController::setUserInfo(QString psw, int autoRefresh, int startRefresh, int readFilter
                                        , int showAbs, int refreshTime, int autoMark)
{
    if(psw != "")
    {
        user->setPassword(psw);
    }
    user->setAutoRefresh(autoRefresh);
    user->setStartRefresh(startRefresh);
    user->setReadFilter(readFilter);
    user->setShowAbstract(showAbs);
    user->setRefreshTime(refreshTime);
    user->setAutoMark(autoMark);
}
