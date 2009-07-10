#ifndef ADDFOLDERDIALOG_H
#define ADDFOLDERDIALOG_H

#include <QtGui/QDialog>
#include "ui_addfolderdialog.h"

namespace Ui {
    class AddFolderDialog;
}

class AddFolderDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(AddFolderDialog)
public:
    explicit AddFolderDialog(QWidget *parent = 0);
    virtual ~AddFolderDialog();
    Ui::AddFolderDialog* ui();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::AddFolderDialog *m_ui;
};

#endif // ADDFOLDERDIALOG_H
