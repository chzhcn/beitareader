/********************************************************************************
** Form generated from reading ui file 'addchanneldialog.ui'
**
** Created: Wed Jul 15 17:38:02 2009
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

class Ui_AddChannelDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QTreeWidget *dirTree;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *folderLine;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *urlLine;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *nameLine;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *checkRssButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddChannelDialog)
    {
        if (AddChannelDialog->objectName().isEmpty())
            AddChannelDialog->setObjectName(QString::fromUtf8("AddChannelDialog"));
        AddChannelDialog->resize(473, 269);
        widget = new QWidget(AddChannelDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(16, 21, 445, 238));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        dirTree = new QTreeWidget(widget);
        dirTree->setObjectName(QString::fromUtf8("dirTree"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dirTree->sizePolicy().hasHeightForWidth());
        dirTree->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(dirTree);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        folderLine = new QLineEdit(widget);
        folderLine->setObjectName(QString::fromUtf8("folderLine"));
        folderLine->setEnabled(false);
        folderLine->setReadOnly(true);

        verticalLayout->addWidget(folderLine);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        urlLine = new QLineEdit(widget);
        urlLine->setObjectName(QString::fromUtf8("urlLine"));

        verticalLayout->addWidget(urlLine);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        nameLine = new QLineEdit(widget);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        verticalLayout->addWidget(nameLine);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkRssButton = new QPushButton(widget);
        checkRssButton->setObjectName(QString::fromUtf8("checkRssButton"));

        horizontalLayout->addWidget(checkRssButton);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AddChannelDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddChannelDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddChannelDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddChannelDialog);
    } // setupUi

    void retranslateUi(QDialog *AddChannelDialog)
    {
        AddChannelDialog->setWindowTitle(QApplication::translate("AddChannelDialog", "Add Channel", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = dirTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("AddChannelDialog", "Folder List", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddChannelDialog", "Folder Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddChannelDialog", "Channel URL:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddChannelDialog", "Channel Name:", 0, QApplication::UnicodeUTF8));
        checkRssButton->setText(QApplication::translate("AddChannelDialog", "Chec&k", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddChannelDialog);
    } // retranslateUi

};

namespace Ui {
    class AddChannelDialog: public Ui_AddChannelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCHANNELDIALOG_H
