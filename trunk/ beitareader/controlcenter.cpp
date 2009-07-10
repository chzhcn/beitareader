#include "controlcenter.h"

ControlCenter::ControlCenter()
{
}

ControlCenter::ControlCenter(BeitaReader  *_main)
{
    main=_main;
    menuController=new MenuToolBarController(_main);
}

ControlCenter::~ControlCenter()
{
}
