/********************************************************************************
** Form generated from reading ui file 'addchanneldialog.ui'
**
** Created: Thu Jul 9 22:23:50 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADDCHANNELDIALOG_H
#define UI_ADDCHANNELDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddChannelDialog
{
public:
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *checkRssButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddChannelDialog)
    {
        if (AddChannelDialog->objectName().isEmpty())
            AddChannelDialog->setObjectName(QString::fromUtf8("AddChannelDialog"));
        AddChannelDialog->resize(400, 300);
        gridLayout = new QGridLayout(AddChannelDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(AddChannelDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddChannelDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(AddChannelDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(AddChannelDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(AddChannelDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(AddChannelDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        checkRssButton = new QPushButton(AddChannelDialog);
        checkRssButton->setObjectName(QString::fromUtf8("checkRssButton"));

        gridLayout->addWidget(checkRssButton, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AddChannelDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

        buttonBox->raise();
        treeView->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        checkRssButton->raise();
        label_3->raise();
        label->raise();

        retranslateUi(AddChannelDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddChannelDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddChannelDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddChannelDialog);
    } // setupUi

    void retranslateUi(QDialog *AddChannelDialog)
    {
        AddChannelDialog->setWindowTitle(QApplication::translate("AddChannelDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddChannelDialog", "ChannelName", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddChannelDialog", "ChannelURL", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddChannelDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        checkRssButton->setText(QApplication::translate("AddChannelDialog", "&Check", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddChannelDialog);
    } // retranslateUi

};

namespace Ui {
    class AddChannelDialog: public Ui_AddChannelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCHANNELDIALOG_H
