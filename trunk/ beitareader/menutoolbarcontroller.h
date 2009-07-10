#ifndef MENUTOOLBARCONTROLLER_H
#define MENUTOOLBARCONTROLLER_H

#include <QObject>
#include "beitareader.h"
#include "controlcenter.h"
#include "addchanneldialog.h"

class MenuToolBarController : public QObject
{
    Q_OBJECT

public:
    MenuToolBarController();
    MenuToolBarController(BeitaReader*);

private:
    BeitaReader *main;
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
};

#endif // MENUTOOLBARCONTROLLER_H
