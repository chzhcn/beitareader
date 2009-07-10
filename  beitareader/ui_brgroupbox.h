/********************************************************************************
** Form generated from reading ui file 'brgroupbox.ui'
**
** Created: Fri Jul 10 13:58:48 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BRGROUPBOX_H
#define UI_BRGROUPBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BRGroupBox
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *welcomeLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *updateLabel;
    QLabel *timeLabel_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *timeLabel;
    QLCDNumber *timeLcdNumber;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *passButton;
    QPushButton *trendsButton;

    void setupUi(QGroupBox *BRGroupBox)
    {
        if (BRGroupBox->objectName().isEmpty())
            BRGroupBox->setObjectName(QString::fromUtf8("BRGroupBox"));
        BRGroupBox->resize(266, 155);
        formLayout = new QFormLayout(BRGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        welcomeLabel = new QLabel(BRGroupBox);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));

        horizontalLayout_7->addWidget(welcomeLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        updateLabel = new QLabel(BRGroupBox);
        updateLabel->setObjectName(QString::fromUtf8("updateLabel"));

        horizontalLayout_6->addWidget(updateLabel);

        timeLabel_2 = new QLabel(BRGroupBox);
        timeLabel_2->setObjectName(QString::fromUtf8("timeLabel_2"));

        horizontalLayout_6->addWidget(timeLabel_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        timeLabel = new QLabel(BRGroupBox);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        horizontalLayout_2->addWidget(timeLabel);

        timeLcdNumber = new QLCDNumber(BRGroupBox);
        timeLcdNumber->setObjectName(QString::fromUtf8("timeLcdNumber"));

        horizontalLayout_2->addWidget(timeLcdNumber);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        passButton = new QPushButton(BRGroupBox);
        passButton->setObjectName(QString::fromUtf8("passButton"));

        horizontalLayout->addWidget(passButton);

        trendsButton = new QPushButton(BRGroupBox);
        trendsButton->setObjectName(QString::fromUtf8("trendsButton"));

        horizontalLayout->addWidget(trendsButton);


        verticalLayout->addLayout(horizontalLayout);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);


        retranslateUi(BRGroupBox);

        QMetaObject::connectSlotsByName(BRGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *BRGroupBox)
    {
        BRGroupBox->setWindowTitle(QApplication::translate("BRGroupBox", "GroupBox", 0, QApplication::UnicodeUTF8));
        BRGroupBox->setTitle(QApplication::translate("BRGroupBox", "Welcome!", 0, QApplication::UnicodeUTF8));
        welcomeLabel->setText(QApplication::translate("BRGroupBox", "Morning, Admin!", 0, QApplication::UnicodeUTF8));
        updateLabel->setText(QApplication::translate("BRGroupBox", "Last Update: ", 0, QApplication::UnicodeUTF8));
        timeLabel_2->setText(QApplication::translate("BRGroupBox", "3 minutes ago", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("BRGroupBox", "Reading Time: ", 0, QApplication::UnicodeUTF8));
        passButton->setText(QApplication::translate("BRGroupBox", "&Change Password", 0, QApplication::UnicodeUTF8));
        trendsButton->setText(QApplication::translate("BRGroupBox", "&Trends", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(BRGroupBox);
    } // retranslateUi

};

namespace Ui {
    class BRGroupBox: public Ui_BRGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRGROUPBOX_H
