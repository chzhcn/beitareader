#include "controlcenter.h"

ControlCenter::ControlCenter()
{
}

ControlCenter::ControlCenter(BeitaReader *_main, User* u)
{
    main=_main;
    user=u;
    menuController = new MenuToolBarController(_main,u);
    groupController = new GroupController(_main,u);
}

ControlCenter::~ControlCenter()
{
}
