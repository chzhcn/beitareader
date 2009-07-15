#ifndef MENUTOOLBARCONTROLLER_H
#define MENUTOOLBARCONTROLLER_H

#include <QObject>
#include "beitareader.h"
#include "controlcenter.h"
#include "addchanneldialog.h"
#include "addfolderdialog.h"
#include "user.h"
#include "settingsdialog.h"

class MenuToolBarController : public QObject
{
    Q_OBJECT

public:
    MenuToolBarController();
    MenuToolBarController(BeitaReader*,User*);

private:
    BeitaReader *main;
    User *user;
    void bindSignalAndSlot();

public slots:
    void addChannelDialog();
    void addFolderDialog();
    void searchArticle();
    void updateAllChannels();
    void fullScreen(bool);
    void showToolBar(bool);
    void showStatusBar(bool);
    void settingsDialog();
    void setUserInfo(QString psw, int autoRefresh, int startRefresh, int readFilter, int showAbs
                   , int refreshTime, int autoMark);

signals:
    void downloadRequest(bool);
};

#endif // MENUTOOLBARCONTROLLER_H
