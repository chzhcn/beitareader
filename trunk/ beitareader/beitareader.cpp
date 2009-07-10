#include "beitareader.h"
#include "ui_beitareader.h"
#include "mytree.h"

BeitaReader::BeitaReader(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::BeitaReader)//, brSplitter(new BRSplitter)
{
    ui->setupUi(this);
    myTree = new MyTree;
    ui->tabWidget->addTab(myTree, "Your Channels");
//    menucontroller=new MenuAndToolBarController();
//    this->setCentralWidget(brSplitter);
//    this->setSignalAndSlot();
}

/*void BeitaReader::setSignalAndSlot()
{
    connect(ui->addChannelAction,SIGNAL(triggered()),menucontroller,SLOT(addChannelDialog()));
    connect(ui->addChannelFolderAction,SIGNAL(triggered()),menucontroller,SLOT(addFolderDialog()));
    connect(ui->searchAction,SIGNAL(triggered()),menucontroller,SLOT(searchArticle()));
    connect(ui->exitAction,SIGNAL(triggered()),this,SLOT(close()));
    connect(ui->switchFullScreenAction,SIGNAL(triggered(bool)),menucontroller,SLOT(fullScreen(bool)));
    connect(ui->switchToolBarAction,SIGNAL(triggered(bool)),menucontroller,SLOT(showToolBar(bool)));
    connect(ui->switchStatusBarAction,SIGNAL(triggered(bool)),menucontroller,SLOT(showStatusBar(bool)));
    connect(ui->settingsAction,SIGNAL(triggered()),menucontroller,SLOT(settingsDialog()));
    connect(ui->updateAction,SIGNAL(triggered()),menucontroller,SLOT(updateAllChannels()));
}*/

BeitaReader::~BeitaReader()
{
    //delete menucontroller;
    delete myTree;
    delete ui;
//    delete brSplitter;
}
