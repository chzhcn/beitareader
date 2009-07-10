#ifndef ADDCHANNELDIALOG_H
#define ADDCHANNELDIALOG_H

#include <QtGui/QDialog>
#include "ui_addchanneldialog.h"

namespace Ui {
    class AddChannelDialog;
}

class AddChannelDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(AddChannelDialog)
public:
    explicit AddChannelDialog(QWidget *parent = 0);
    virtual ~AddChannelDialog();
    Ui::AddChannelDialog* ui();

protected:
    virtual void changeEvent(QEvent *e);

public:
    Ui::AddChannelDialog *m_ui;
};

#endif // ADDCHANNELDIALOG_H
