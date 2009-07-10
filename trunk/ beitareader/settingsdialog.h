#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QtGui/QDialog>
#include "ui_settingsdialog.h"

namespace Ui {
    class SettingsDialog;
}

class SettingsDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(SettingsDialog)
public:
    explicit SettingsDialog(QWidget *parent = 0);
    virtual ~SettingsDialog();
    Ui::SettingsDialog* ui();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::SettingsDialog *m_ui;
};

#endif // SETTINGSDIALOG_H