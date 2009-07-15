#include <QtGui>
#include "mysplitterhandle.h"

MySplitterHandle::MySplitterHandle (Qt::Orientation orientation, QSplitter *parent)
    : QSplitterHandle(orientation, parent)
{
    button = new QPushButton(":", this);
    button->setFixedHeight(this->height()*4);

    vLayout = new QVBoxLayout(this);

    vLayout->addStretch();
    vLayout->addWidget(button);
    vLayout->addStretch();
    vLayout->setMargin(0);

    connect(button, SIGNAL(clicked()), this->parent(),SLOT(hideOrShow()));
}

MySplitterHandle::~MySplitterHandle()
{
    delete vLayout;
    delete button;
}

void MySplitterHandle::enterEvent ( QEvent * event )
{

}
