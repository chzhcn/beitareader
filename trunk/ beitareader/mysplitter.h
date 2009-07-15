#ifndef MYSPLITTER_H
#define MYSPLITTER_H

#include <QSplitter>
#include "mysplitterhandle.h"
class MySplitter : public QSplitter
{
    Q_OBJECT

public:

    MySplitter(QWidget *parent = 0);
    MySplitter(Qt::Orientation orientation, QWidget *parent = 0);
    ~MySplitter();

public slots:
    void hideOrShow();

protected:
    QSplitterHandle *createHandle();    

private:
    int tempLeft;
    int tempRight;
};

#endif // MYSPLITTER_H
