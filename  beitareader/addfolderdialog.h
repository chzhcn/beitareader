#ifndef ADDFOLDERDIALOG_H
#define ADDFOLDERDIALOG_H

#include <QtGui/QDialog>
#include <QLineEdit>
#include <QTreeWidget>
#include <QPushButton>
#include <QDialogButtonBox>
#include "folder.h"
#include "ui_addfolderdialog.h"

namespace Ui {
    class AddFolderDialog;
}

class AddFolderDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(AddFolderDialog)
public:
    explicit AddFolderDialog(int currentItemID, QWidget *parent = 0);
    virtual ~AddFolderDialog();
    void setupFolder(QTreeWidgetItem*, QVector<Folder*>, int id);
//    void setCurrentItem(int index);

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::AddFolderDialog *m_ui;
    QTreeWidget *dirTree;
    QLineEdit *parentFolderLine;
    QLineEdit *nameLine;
    QPushButton *rootButton;
    QDialogButtonBox *buttonBox;

signals:
    void addFolderFinished(int, int, QString);

private slots:
    void handleFolderSelected(QTreeWidgetItem*, int);
    void handleRootClicked();
    void handleOKClicked();
};

#endif // ADDFOLDERDIALOG_H
