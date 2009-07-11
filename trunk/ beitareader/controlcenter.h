#ifndef CONTROLCENTER_H
#define CONTROLCENTER_H

#include <QObject>
#include "beitareader.h"
#include "menutoolbarcontroller.h"
#include "user.h"
#include "nlogincontroller.h"
#include "groupcontroller.h"

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
};

#endif // CONTROLCENTER_H
