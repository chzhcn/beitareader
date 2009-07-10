#ifndef BRGROUPBOX_H
#define BRGROUPBOX_H

#include <QtGui/QGroupBox>

namespace Ui {
    class BRGroupBox;
}

class BRGroupBox : public QGroupBox {
    Q_OBJECT
    Q_DISABLE_COPY(BRGroupBox)
public:
    explicit BRGroupBox(QWidget *parent = 0);
    virtual ~BRGroupBox();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::BRGroupBox *m_ui;
};

#endif // BRGROUPBOX_H
