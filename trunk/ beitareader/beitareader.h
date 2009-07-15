#ifndef BEITAREADER_H
#define BEITAREADER_H

#include <QtGui/QMainWindow>
#include "ui_beitareader.h"
#include "mytree.h"

namespace Ui
{
    class BeitaReader;
}

class WebBrowser;

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
    MyTree *myTree;

private:    
    //Ui::BeitaReader *ui;
    //void setSignalAndSlot();
    //MenuAndToolBarController *menucontroller;

//    BRSplitter *brSplitter;

};

#endif // BEITAREADER_H
