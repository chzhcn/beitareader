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
    void setPassword(QString psw){password = psw;}

public slots:
    void abstractNoControl(bool);
    void abstractYesControl(bool);
    void filterNoControl(bool);
    void filterYesControl(bool);


protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::SettingsDialog *m_ui;
    QString password;

signals:
    void finalInfo(QString psw, int autoRefresh, int startRefresh, int readFilter, int showAbs
                   , int refreshTime, int autoMark);

private slots:
    void on_applypushButton_clicked();
    void on_ResumeButton_clicked();
    void on_pushButton_clicked();
    void on_buttonBox_accepted();
};

#endif // SETTINGSDIALOG_H
