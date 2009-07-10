#ifndef MYSPLITTERHANDLE_H
#define MYSPLITTERHANDLE_H

#include <QSplitterHandle>
#include <QtGui>

class MySplitterHandle : public QSplitterHandle
{
public:
//    MySplitterHandle();
    MySplitterHandle ( Qt::Orientation orientation, QSplitter * parent );
    ~MySplitterHandle();
protected:
    void enterEvent(QEvent *event);
//    void mouseMoveEvent ( QMouseEvent * event );
private:
    QVBoxLayout *vLayout;
    QPushButton *button;

};

#endif // MYSPLITTERHANDLE_H
