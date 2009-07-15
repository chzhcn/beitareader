#ifndef ADDCHANNELDIALOG_H
#define ADDCHANNELDIALOG_H

#include <QtGui/QDialog>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDialogButtonBox>
#include <QLineEdit>
#include <QPushButton>
#include "folder.h"
#include "checktherss.h"
#include "ui_addchanneldialog.h"

namespace Ui {
    class AddChannelDialog;
}

class AddChannelDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(AddChannelDialog)
public:
    explicit AddChannelDialog(int currentItemID, QWidget *parent = 0);
    virtual ~AddChannelDialog();
    void setupFolder(QTreeWidgetItem *item, QVector<Folder*> folders, int id);

protected:
    virtual void changeEvent(QEvent *e);

public:
    Ui::AddChannelDialog *m_ui;
    QTreeWidget *dirTree;
    QDialogButtonBox *buttonBox;
    QLineEdit *folderLine;
    QLineEdit *urlLine;
    QLineEdit *nameLine;
    CheckTheRss *checkTheRss;
    QPushButton *checkRssButton;

signals:
    void addChannelFinished(int, int, QString);

private slots:
    void handleFolderSelected(QTreeWidgetItem*, int);
    void handleCheckClicked();
    void handleCheckResult(bool);
    void handleOkClicked();
    void inputUrlChanged(QString);


};

#endif // ADDCHANNELDIALOG_H
