/********************************************************************************
** Form generated from reading ui file 'addfolderdialog.ui'
**
** Created: Fri Jul 10 13:58:48 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADDFOLDERDIALOG_H
#define UI_ADDFOLDERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFolderDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTreeView *treeView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *AddFolderDialog)
    {
        if (AddFolderDialog->objectName().isEmpty())
            AddFolderDialog->setObjectName(QString::fromUtf8("AddFolderDialog"));
        AddFolderDialog->resize(378, 212);
        buttonBox = new QDialogButtonBox(AddFolderDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(190, 160, 176, 34));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        treeView = new QTreeView(AddFolderDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(9, 9, 161, 192));
        widget = new QWidget(AddFolderDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 10, 171, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        retranslateUi(AddFolderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddFolderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddFolderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddFolderDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFolderDialog)
    {
        AddFolderDialog->setWindowTitle(QApplication::translate("AddFolderDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddFolderDialog", "FolderName", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddFolderDialog);
    } // retranslateUi

};

namespace Ui {
    class AddFolderDialog: public Ui_AddFolderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFOLDERDIALOG_H
