#ifndef CONTROLCENTER_H
#define CONTROLCENTER_H

#include <QObject>
#include "beitareader.h"
#include "menutoolbarcontroller.h"

class MenuToolBarController;
class ControlCenter : public QObject
{
    Q_OBJECT

public:
    ControlCenter();
    ControlCenter(BeitaReader*);
    ~ControlCenter();

private:
    BeitaReader *main;
    MenuToolBarController *menuController;
};

#endif // CONTROLCENTER_H
