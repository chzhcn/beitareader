/********************************************************************************
** Form generated from reading ui file 'beitareader.ui'
**
** Created: Fri Jul 10 13:58:48 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BEITAREADER_H
#define UI_BEITAREADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "brgroupbox.h"
#include "mysplitter.h"
#include "searchtab.h"
#include "webbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_BeitaReader
{
public:
    QAction *addChannelAction;
    QAction *addChannelFolderAction;
    QAction *searchAction;
    QAction *ImportChannelsAction;
    QAction *exportChannelsAction;
    QAction *exitAction;
    QAction *updateAction;
    QAction *switchFullScreenAction;
    QAction *switchToolBarAction;
    QAction *switchStatusBarAction;
    QAction *settingsAction;
    QAction *helpAction;
    QAction *aboutAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    MySplitter *splitter_2;
    QSplitter *splitter;
    BRGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *channelTab;
    QWidget *favorTab;
    SearchTab *searchTab;
    WebBrowser *widget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BeitaReader)
    {
        if (BeitaReader->objectName().isEmpty())
            BeitaReader->setObjectName(QString::fromUtf8("BeitaReader"));
        BeitaReader->resize(1600, 900);
        addChannelAction = new QAction(BeitaReader);
        addChannelAction->setObjectName(QString::fromUtf8("addChannelAction"));
        addChannelFolderAction = new QAction(BeitaReader);
        addChannelFolderAction->setObjectName(QString::fromUtf8("addChannelFolderAction"));
        searchAction = new QAction(BeitaReader);
        searchAction->setObjectName(QString::fromUtf8("searchAction"));
        ImportChannelsAction = new QAction(BeitaReader);
        ImportChannelsAction->setObjectName(QString::fromUtf8("ImportChannelsAction"));
        exportChannelsAction = new QAction(BeitaReader);
        exportChannelsAction->setObjectName(QString::fromUtf8("exportChannelsAction"));
        exitAction = new QAction(BeitaReader);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        updateAction = new QAction(BeitaReader);
        updateAction->setObjectName(QString::fromUtf8("updateAction"));
        switchFullScreenAction = new QAction(BeitaReader);
        switchFullScreenAction->setObjectName(QString::fromUtf8("switchFullScreenAction"));
        switchFullScreenAction->setCheckable(true);
        switchToolBarAction = new QAction(BeitaReader);
        switchToolBarAction->setObjectName(QString::fromUtf8("switchToolBarAction"));
        switchToolBarAction->setCheckable(true);
        switchStatusBarAction = new QAction(BeitaReader);
        switchStatusBarAction->setObjectName(QString::fromUtf8("switchStatusBarAction"));
        switchStatusBarAction->setCheckable(true);
        settingsAction = new QAction(BeitaReader);
        settingsAction->setObjectName(QString::fromUtf8("settingsAction"));
        helpAction = new QAction(BeitaReader);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        aboutAction = new QAction(BeitaReader);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        centralWidget = new QWidget(BeitaReader);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_2 = new MySplitter(centralWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new BRGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        splitter->addWidget(groupBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        channelTab = new QWidget();
        channelTab->setObjectName(QString::fromUtf8("channelTab"));
        tabWidget->addTab(channelTab, QString());
        favorTab = new QWidget();
        favorTab->setObjectName(QString::fromUtf8("favorTab"));
        tabWidget->addTab(favorTab, QString());
        searchTab = new SearchTab();
        searchTab->setObjectName(QString::fromUtf8("searchTab"));
        tabWidget->addTab(searchTab, QString());
        splitter->addWidget(tabWidget);
        splitter_2->addWidget(splitter);
        widget = new WebBrowser(splitter_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        splitter_2->addWidget(widget);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        BeitaReader->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BeitaReader);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1600, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        BeitaReader->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BeitaReader);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BeitaReader->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BeitaReader);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BeitaReader->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(addChannelAction);
        menuFile->addAction(addChannelFolderAction);
        menuFile->addAction(searchAction);
        menuFile->addSeparator();
        menuFile->addAction(ImportChannelsAction);
        menuFile->addAction(exportChannelsAction);
        menuFile->addSeparator();
        menuFile->addAction(exitAction);
        menuView->addAction(updateAction);
        menuView->addSeparator();
        menuView->addAction(switchFullScreenAction);
        menuView->addAction(switchToolBarAction);
        menuView->addAction(switchStatusBarAction);
        menuView->addSeparator();
        menuView->addAction(settingsAction);
        menuHelp->addAction(helpAction);
        menuHelp->addAction(aboutAction);
        mainToolBar->addAction(addChannelAction);
        mainToolBar->addAction(addChannelFolderAction);
        mainToolBar->addAction(searchAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(updateAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(switchFullScreenAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(settingsAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(exitAction);

        retranslateUi(BeitaReader);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BeitaReader);
    } // setupUi

    void retranslateUi(QMainWindow *BeitaReader)
    {
        BeitaReader->setWindowTitle(QApplication::translate("BeitaReader", "Beita Reader", 0, QApplication::UnicodeUTF8));
        addChannelAction->setText(QApplication::translate("BeitaReader", "Add Channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addChannelAction->setToolTip(QApplication::translate("BeitaReader", "Add a new Channel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addChannelAction->setShortcut(QApplication::translate("BeitaReader", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        addChannelFolderAction->setText(QApplication::translate("BeitaReader", "Add Channel Folder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addChannelFolderAction->setToolTip(QApplication::translate("BeitaReader", "Add a Channel Foler", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchAction->setText(QApplication::translate("BeitaReader", "Search", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchAction->setToolTip(QApplication::translate("BeitaReader", "Remove a Channel Item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchAction->setShortcut(QApplication::translate("BeitaReader", "Del", 0, QApplication::UnicodeUTF8));
        ImportChannelsAction->setText(QApplication::translate("BeitaReader", "Import Channels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ImportChannelsAction->setToolTip(QApplication::translate("BeitaReader", "Import OMPL files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exportChannelsAction->setText(QApplication::translate("BeitaReader", "Export Channels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportChannelsAction->setToolTip(QApplication::translate("BeitaReader", "Export OPML file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exitAction->setText(QApplication::translate("BeitaReader", "Exit", 0, QApplication::UnicodeUTF8));
        exitAction->setShortcut(QApplication::translate("BeitaReader", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        updateAction->setText(QApplication::translate("BeitaReader", "Update!", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        updateAction->setToolTip(QApplication::translate("BeitaReader", "Refresh All Channels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        updateAction->setShortcut(QApplication::translate("BeitaReader", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        switchFullScreenAction->setText(QApplication::translate("BeitaReader", "Full Screen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        switchFullScreenAction->setToolTip(QApplication::translate("BeitaReader", "Switch Full Screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        switchFullScreenAction->setShortcut(QApplication::translate("BeitaReader", "Alt+Return", 0, QApplication::UnicodeUTF8));
        switchToolBarAction->setText(QApplication::translate("BeitaReader", "Tool Bar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        switchToolBarAction->setToolTip(QApplication::translate("BeitaReader", "Switch Tool Bar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        switchStatusBarAction->setText(QApplication::translate("BeitaReader", "Status Bar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        switchStatusBarAction->setToolTip(QApplication::translate("BeitaReader", "Switch Status Bar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        settingsAction->setText(QApplication::translate("BeitaReader", "Settings", 0, QApplication::UnicodeUTF8));
        helpAction->setText(QApplication::translate("BeitaReader", "Help", 0, QApplication::UnicodeUTF8));
        helpAction->setShortcut(QApplication::translate("BeitaReader", "F1", 0, QApplication::UnicodeUTF8));
        aboutAction->setText(QApplication::translate("BeitaReader", "About", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("BeitaReader", "GroupBox", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(channelTab), QApplication::translate("BeitaReader", "Your Channels", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(favorTab), QApplication::translate("BeitaReader", "Your Favorates", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(searchTab), QApplication::translate("BeitaReader", "Search", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("BeitaReader", "File", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("BeitaReader", "View", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("BeitaReader", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BeitaReader: public Ui_BeitaReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEITAREADER_H
