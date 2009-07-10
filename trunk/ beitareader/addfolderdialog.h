#ifndef ADDFOLDERDIALOG_H
#define ADDFOLDERDIALOG_H

#include <QtGui/QDialog>

namespace Ui {
    class AddFolderDialog;
}

class AddFolderDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(AddFolderDialog)
public:
    explicit AddFolderDialog(QWidget *parent = 0);
    virtual ~AddFolderDialog();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::AddFolderDialog *m_ui;
};

#endif // ADDFOLDERDIALOG_H
