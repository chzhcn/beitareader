#ifndef BRGROUPBOX_H
#define BRGROUPBOX_H

#include <QtGui/QGroupBox>
#include "ui_brgroupbox.h"

namespace Ui {
    class BRGroupBox;
}

class BRGroupBox : public QGroupBox {
    Q_OBJECT
    Q_DISABLE_COPY(BRGroupBox)
public:
    explicit BRGroupBox(QWidget *parent = 0);
    virtual ~BRGroupBox();
    Ui::BRGroupBox* ui();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::BRGroupBox *m_ui;
};

#endif // BRGROUPBOX_H
