#ifndef CONTROLCENTER_H
#define CONTROLCENTER_H

#include <QObject>
#include "beitareader.h"
#include "menutoolbarcontroller.h"
#include "user.h"
#include "nlogincontroller.h"
#include "groupcontroller.h"
#include "treecontroller.h"
#include "webcontroller.h"
#include "downloadcontroller.h"

class MenuToolBarController;
class ControlCenter : public QObject
{
    Q_OBJECT

public:
    ControlCenter();
    ControlCenter(BeitaReader*,User*);
    ~ControlCenter();

private:
    BeitaReader *main;
    User *user;
    MenuToolBarController *menuController;
    GroupController *groupController;
    TreeController *treeController;
    WebController *webController;
    DownloadController *downloadController;
};

#endif // CONTROLCENTER_H
