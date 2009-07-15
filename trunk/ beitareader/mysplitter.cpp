#include "mysplitter.h"

MySplitter::MySplitter(QWidget *parent)
    : QSplitter(parent)//, ui(new Ui::MySplitter)
{
    setHandleWidth(10);

    tempLeft = 0;
    tempRight = 0;
}

MySplitter::~MySplitter()
{

}

QSplitterHandle* MySplitter::createHandle()
{
    return new MySplitterHandle(orientation(), this);
}

//void MySplitter::paintEvent(QPaintEvent *event)
//{
//
//}

//
void MySplitter::hideOrShow()
{

//    QMessageBox msgBox;
//    msgBox.setText("in: "+QString::number(tempWidth));
//    msgBox.exec();
    QList<int> *sizeList = new QList<int>;

    if (sizes().at(0) != 0) {
        tempLeft = this->widget(0)->width();
        tempRight = this->widget(1)->width();

        if (tempRight == 0)
            tempRight++;

        sizeList->append(0);
//        Hide = true;
    } else {
        sizeList->append(tempLeft);
//        Hide = false;
    }

    sizeList->append(tempRight);
    this->setSizes(*sizeList);

    delete sizeList;
    sizeList = 0;
//
//    int width = widget(0)->width();
////    Qcout << width << endl;
//    if (!ishide)
//    {
//        tempWidth = this->sizes().at(0);
////        QMessageBox::information(this, "", tempWidth, QMessageBox::y()|QMessage
////        QMessageBox msgBox;
//        msgBox.setText("!ishide: " + QString::number(tempWidth));
//        msgBox.exec();
//        sizeList->append(0);
//        ishide = true;
//    } else {
////        QMessageBox msgBox;
////        msgBox.setText("ishide: " + QString::number(sizeList->at(0)) + ", " + QString::number(sizeList->at(1)));
////        msgBox.exec();
//        sizeList->append(tempWidth);
//        msgBox.setText("ishide_aft_apen: " + QString::number(sizeList->at(0)));
//        msgBox.exec();
//        ishide = false;
//    }
//    msgBox.setText("bef_set_sizeList(1): " + QString::number(this->sizes().at(1)));
//    msgBox.exec();
//    sizeList->append(this->sizes().at(1));
//    msgBox.setText("bef_set: " + QString::number(sizeList->at(0)) + ", " + QString::number(sizeList->at(1)));
//    msgBox.exec();
//    this->setSizes(*sizeList);
//    delete sizeList;
//    sizeList = 0;
}



//    QWidget *w = widget(0);
//    QSize *s = new QSize(w->size());
//    QSize *zero = new QSize(0, 0);
//    if (w->size().width() != zero->width())
//        w->setFixedWidth(0);
//    else
//        w->saveGeometr

