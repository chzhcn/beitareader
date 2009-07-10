#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QtGui/QDialog>
#include "ui_registerdialog.h"

namespace Ui {
    class RegisterDialog;
}

class RegisterDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(RegisterDialog)
public:
    explicit RegisterDialog(QWidget *parent = 0);
    virtual ~RegisterDialog();
    Ui::RegisterDialog* ui();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::RegisterDialog *m_ui;

signals:
    void registerSubmit(QString,QString,QString);

private slots:
    void on_buttonBox_accepted();
};

#endif // REGISTERDIALOG_H
