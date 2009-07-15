/********************************************************************************
** Form generated from reading ui file 'addfolderdialog.ui'
**
** Created: Wed Jul 15 17:38:02 2009
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFolderDialog
{
public:
    QTreeWidget *dirTree;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *parentFolderLine;
    QPushButton *rootButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *nameLine;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddFolderDialog)
    {
        if (AddFolderDialog->objectName().isEmpty())
            AddFolderDialog->setObjectName(QString::fromUtf8("AddFolderDialog"));
        AddFolderDialog->resize(500, 212);
        dirTree = new QTreeWidget(AddFolderDialog);
        dirTree->setObjectName(QString::fromUtf8("dirTree"));
        dirTree->setGeometry(QRect(11, 11, 256, 192));
        widget = new QWidget(AddFolderDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 12, 221, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        parentFolderLine = new QLineEdit(widget);
        parentFolderLine->setObjectName(QString::fromUtf8("parentFolderLine"));
        parentFolderLine->setEnabled(false);

        horizontalLayout_3->addWidget(parentFolderLine);

        rootButton = new QPushButton(widget);
        rootButton->setObjectName(QString::fromUtf8("rootButton"));

        horizontalLayout_3->addWidget(rootButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        nameLine = new QLineEdit(widget);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        verticalLayout->addWidget(nameLine);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddFolderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddFolderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddFolderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddFolderDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFolderDialog)
    {
        AddFolderDialog->setWindowTitle(QApplication::translate("AddFolderDialog", "Add Folder", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = dirTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("AddFolderDialog", "Folder List", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddFolderDialog", "Belonged Folder:", 0, QApplication::UnicodeUTF8));
        rootButton->setText(QApplication::translate("AddFolderDialog", "&Root Folder", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddFolderDialog", "Folder Name:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddFolderDialog);
    } // retranslateUi

};

namespace Ui {
    class AddFolderDialog: public Ui_AddFolderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFOLDERDIALOG_H
