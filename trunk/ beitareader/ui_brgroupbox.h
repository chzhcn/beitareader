/********************************************************************************
** Form generated from reading ui file 'brgroupbox.ui'
**
** Created: Wed Jul 15 17:38:02 2009
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
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BRGroupBox
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *greetLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *timeLabel;
    QLabel *updateLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *reaftimelabel;
    QLabel *updatetimeLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *trendsButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QGroupBox *BRGroupBox)
    {
        if (BRGroupBox->objectName().isEmpty())
            BRGroupBox->setObjectName(QString::fromUtf8("BRGroupBox"));
        BRGroupBox->resize(245, 143);
        formLayout = new QFormLayout(BRGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        greetLabel = new QLabel(BRGroupBox);
        greetLabel->setObjectName(QString::fromUtf8("greetLabel"));

        horizontalLayout_2->addWidget(greetLabel);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        timeLabel = new QLabel(BRGroupBox);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        verticalLayout->addWidget(timeLabel);

        updateLabel = new QLabel(BRGroupBox);
        updateLabel->setObjectName(QString::fromUtf8("updateLabel"));

        verticalLayout->addWidget(updateLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        reaftimelabel = new QLabel(BRGroupBox);
        reaftimelabel->setObjectName(QString::fromUtf8("reaftimelabel"));

        verticalLayout_2->addWidget(reaftimelabel);

        updatetimeLabel = new QLabel(BRGroupBox);
        updatetimeLabel->setObjectName(QString::fromUtf8("updatetimeLabel"));

        verticalLayout_2->addWidget(updatetimeLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(18, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        trendsButton = new QPushButton(BRGroupBox);
        trendsButton->setObjectName(QString::fromUtf8("trendsButton"));

        horizontalLayout_3->addWidget(trendsButton);

        horizontalSpacer = new QSpacerItem(118, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);


        retranslateUi(BRGroupBox);

        QMetaObject::connectSlotsByName(BRGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *BRGroupBox)
    {
        BRGroupBox->setWindowTitle(QApplication::translate("BRGroupBox", "GroupBox", 0, QApplication::UnicodeUTF8));
        BRGroupBox->setTitle(QApplication::translate("BRGroupBox", "Welcome!", 0, QApplication::UnicodeUTF8));
        greetLabel->setText(QApplication::translate("BRGroupBox", "Morning, Admin!", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("BRGroupBox", "Reading Time: ", 0, QApplication::UnicodeUTF8));
        updateLabel->setText(QApplication::translate("BRGroupBox", "Last Update: ", 0, QApplication::UnicodeUTF8));
        reaftimelabel->setText(QApplication::translate("BRGroupBox", "1h 40min", 0, QApplication::UnicodeUTF8));
        updatetimeLabel->setText(QApplication::translate("BRGroupBox", "3 minutes ago", 0, QApplication::UnicodeUTF8));
        trendsButton->setText(QApplication::translate("BRGroupBox", "&Trends", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(BRGroupBox);
    } // retranslateUi

};

namespace Ui {
    class BRGroupBox: public Ui_BRGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRGROUPBOX_H
