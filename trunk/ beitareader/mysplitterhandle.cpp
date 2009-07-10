#include <QtGui>
//#include <QPushButton>
//#include "mysplitter.h"
#include "mysplitterhandle.h"
//#include <QGridLayout>
//#include <QSizePolicy>
//MySplitterHandle::MySplitterHandle()
//{
//}
MySplitterHandle::MySplitterHandle (Qt::Orientation orientation, QSplitter *parent)
    : QSplitterHandle(orientation, parent)
{
    button = new QPushButton(":", this);
    button->setFixedHeight(this->height()*2);
 //   QGridLayout *layout= new QGridLayout(this);
//    button = new QPushButton("->", layout);
    //    QPushButton button1;
    vLayout = new QVBoxLayout(this);
//    button = new QPushButton(">");
//      vLayout->addWidget(button);
//    QPushButton button1;
    vLayout->addStretch();
    vLayout->addWidget(button);
    vLayout->addStretch();
    vLayout->setMargin(0);


//    connect(button,
    connect(button, SIGNAL(clicked()), this->parent(),SLOT(hideOrShow()));
   // connect(button,SIGNAL(
//
//    button->setSizePolicy(QSizePolicy::PushButton);
}

MySplitterHandle::~MySplitterHandle()
{
    delete vLayout;
    delete button;
}

void MySplitterHandle::enterEvent ( QEvent * event )
{

}

//void MySplitterHandle::mouseMoveEvent ( QMouseEvent * event )
//{
//
//}
