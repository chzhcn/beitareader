#ifndef BEITAREADER_H
#define BEITAREADER_H
#include "mytree.h"

#include <QtGui/QMainWindow>
//#include "menuandtoolbarcontroller.h"

//#include "mysplitter.h"
//#include "brsplitter.h"

namespace Ui
{
    class BeitaReader;
}

class MyTree;
//class BeitaReader;
//class BRSplitter;

class BeitaReader : public QMainWindow
{
    Q_OBJECT

public:
    BeitaReader(QWidget *parent = 0);
    ~BeitaReader();
    Ui::BeitaReader *ui;

private:
    MyTree * myTree;
    //Ui::BeitaReader *ui;
    //void setSignalAndSlot();
    //MenuAndToolBarController *menucontroller;

//    BRSplitter *brSplitter;

};

#endif // BEITAREADER_H
