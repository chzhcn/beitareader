#include "controlcenter.h"

ControlCenter::ControlCenter()
{
}

ControlCenter::ControlCenter(BeitaReader *_main, User u)
{
    main=_main;
    user=u;
    menuController=new MenuToolBarController(_main);
}

ControlCenter::~ControlCenter()
{
}
