#ifndef MYSPLITTER_H
#define MYSPLITTER_H

#include <QSplitter>

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
//    bool Hide;
//    Ui::MySplitter *ui;
};

#endif // MYSPLITTER_H
