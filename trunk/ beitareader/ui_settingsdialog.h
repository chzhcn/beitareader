/********************************************************************************
** Form generated from reading ui file 'settingsdialog.ui'
**
** Created: Fri Jul 10 13:58:48 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QWidget *tab_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox_3;
    QPushButton *ResumeButton;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(420, 309);
        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(70, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 401, 251));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 27));
        label->setMaximumSize(QSize(60, 27));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 2);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(31, 25, 331, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_3->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(widget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_3->addWidget(radioButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        tabWidget->addTab(tab_2, QString());
        ResumeButton = new QPushButton(SettingsDialog);
        ResumeButton->setObjectName(QString::fromUtf8("ResumeButton"));
        ResumeButton->setGeometry(QRect(20, 270, 121, 27));

        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SettingsDialog", "GroupBox", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SettingsDialog", "RefTime", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SettingsDialog", "SavNumber", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("SettingsDialog", "Allow Refresh After Login", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("SettingsDialog", "Allow Auto Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsDialog", "Channel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SettingsDialog", "FilterSetting", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("SettingsDialog", "Only Unread", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("SettingsDialog", "All", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingsDialog", "DisplaySetting", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("SettingsDialog", "Only Title", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("SettingsDialog", "Title And Abstract", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("SettingsDialog", "Mark \"Read\" When Moving Next", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsDialog", "Reading", 0, QApplication::UnicodeUTF8));
        ResumeButton->setText(QApplication::translate("SettingsDialog", "Default Settings", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SettingsDialog);
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
