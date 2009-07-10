#include "menutoolbarcontroller.h"

MenuToolBarController::MenuToolBarController()
{
}

MenuToolBarController::MenuToolBarController(BeitaReader* _main)
{
    main=_main;
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
    AddChannelDialog *a=new AddChannelDialog(main);
    a->show();
}

void MenuToolBarController::addFolderDialog()
{

}

void MenuToolBarController::searchArticle()
{

}

void MenuToolBarController::updateAllChannels()
{

}

void MenuToolBarController::showStatusBar(bool isShown)
{

}

void MenuToolBarController::showToolBar(bool isShown)
{

}

void MenuToolBarController::fullScreen(bool isShown)
{

}

void MenuToolBarController::settingsDialog()
{

}
