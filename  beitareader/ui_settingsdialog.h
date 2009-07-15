/********************************************************************************
** Form generated from reading ui file 'settingsdialog.ui'
**
** Created: Wed Jul 15 17:38:02 2009
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *refreshTimecomboBox;
    QLabel *label_2;
    QComboBox *saveNumbercomboBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *startRefreshcheckBox;
    QCheckBox *autoRefreshcheckBox;
    QWidget *tab_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGroupBox *filterGroup;
    QHBoxLayout *horizontalLayout;
    QRadioButton *filterYesradioButton;
    QRadioButton *filterNoradioButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QGroupBox *abstractGroup;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *abstractNoradioButton;
    QRadioButton *abstractYesradioButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *autoMarkcheckBox;
    QWidget *tab_3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *oldPswlineEdit;
    QLabel *label_6;
    QLineEdit *newPswlineEdit;
    QLabel *label_7;
    QLineEdit *confirmlineEdit;
    QPushButton *ResumeButton;
    QPushButton *applypushButton;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(420, 309);
        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(230, 270, 176, 34));
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 25, 311, 91));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        refreshTimecomboBox = new QComboBox(layoutWidget);
        refreshTimecomboBox->setObjectName(QString::fromUtf8("refreshTimecomboBox"));

        gridLayout->addWidget(refreshTimecomboBox, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        saveNumbercomboBox = new QComboBox(layoutWidget);
        saveNumbercomboBox->setObjectName(QString::fromUtf8("saveNumbercomboBox"));

        gridLayout->addWidget(saveNumbercomboBox, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 122, 188, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        startRefreshcheckBox = new QCheckBox(layoutWidget1);
        startRefreshcheckBox->setObjectName(QString::fromUtf8("startRefreshcheckBox"));

        verticalLayout_2->addWidget(startRefreshcheckBox);

        autoRefreshcheckBox = new QCheckBox(layoutWidget1);
        autoRefreshcheckBox->setObjectName(QString::fromUtf8("autoRefreshcheckBox"));

        verticalLayout_2->addWidget(autoRefreshcheckBox);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(31, 25, 331, 173));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        filterGroup = new QGroupBox(layoutWidget2);
        filterGroup->setObjectName(QString::fromUtf8("filterGroup"));
        horizontalLayout = new QHBoxLayout(filterGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filterYesradioButton = new QRadioButton(filterGroup);
        filterYesradioButton->setObjectName(QString::fromUtf8("filterYesradioButton"));

        horizontalLayout->addWidget(filterYesradioButton);

        filterNoradioButton = new QRadioButton(filterGroup);
        filterNoradioButton->setObjectName(QString::fromUtf8("filterNoradioButton"));

        horizontalLayout->addWidget(filterNoradioButton);


        verticalLayout->addWidget(filterGroup);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        abstractGroup = new QGroupBox(layoutWidget2);
        abstractGroup->setObjectName(QString::fromUtf8("abstractGroup"));
        horizontalLayout_3 = new QHBoxLayout(abstractGroup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        abstractNoradioButton = new QRadioButton(abstractGroup);
        abstractNoradioButton->setObjectName(QString::fromUtf8("abstractNoradioButton"));

        horizontalLayout_3->addWidget(abstractNoradioButton);

        abstractYesradioButton = new QRadioButton(abstractGroup);
        abstractYesradioButton->setObjectName(QString::fromUtf8("abstractYesradioButton"));

        horizontalLayout_3->addWidget(abstractYesradioButton);


        verticalLayout->addWidget(abstractGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        autoMarkcheckBox = new QCheckBox(layoutWidget2);
        autoMarkcheckBox->setObjectName(QString::fromUtf8("autoMarkcheckBox"));

        verticalLayout->addWidget(autoMarkcheckBox);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 30, 331, 151));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        oldPswlineEdit = new QLineEdit(layoutWidget3);
        oldPswlineEdit->setObjectName(QString::fromUtf8("oldPswlineEdit"));

        gridLayout_3->addWidget(oldPswlineEdit, 0, 1, 1, 1);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        newPswlineEdit = new QLineEdit(layoutWidget3);
        newPswlineEdit->setObjectName(QString::fromUtf8("newPswlineEdit"));

        gridLayout_3->addWidget(newPswlineEdit, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        confirmlineEdit = new QLineEdit(layoutWidget3);
        confirmlineEdit->setObjectName(QString::fromUtf8("confirmlineEdit"));

        gridLayout_3->addWidget(confirmlineEdit, 2, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        ResumeButton = new QPushButton(SettingsDialog);
        ResumeButton->setObjectName(QString::fromUtf8("ResumeButton"));
        ResumeButton->setGeometry(QRect(10, 270, 121, 31));
        applypushButton = new QPushButton(SettingsDialog);
        applypushButton->setObjectName(QString::fromUtf8("applypushButton"));
        applypushButton->setGeometry(QRect(140, 270, 85, 34));

        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("SettingsDialog", "Refresh Time", 0, QApplication::UnicodeUTF8));
        refreshTimecomboBox->clear();
        refreshTimecomboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "15min", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "30min", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "1h", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "2h", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "4h", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "6h", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "12h", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "1day", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("SettingsDialog", "Max Save Number", 0, QApplication::UnicodeUTF8));
        saveNumbercomboBox->clear();
        saveNumbercomboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "80", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "200", 0, QApplication::UnicodeUTF8)
        );
        startRefreshcheckBox->setText(QApplication::translate("SettingsDialog", "Allow Refresh After Login", 0, QApplication::UnicodeUTF8));
        autoRefreshcheckBox->setText(QApplication::translate("SettingsDialog", "Allow Auto Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsDialog", "Channel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SettingsDialog", "FilterSetting", 0, QApplication::UnicodeUTF8));
        filterYesradioButton->setText(QApplication::translate("SettingsDialog", "Only Unread", 0, QApplication::UnicodeUTF8));
        filterNoradioButton->setText(QApplication::translate("SettingsDialog", "All", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingsDialog", "DisplaySetting", 0, QApplication::UnicodeUTF8));
        abstractNoradioButton->setText(QApplication::translate("SettingsDialog", "Only Title", 0, QApplication::UnicodeUTF8));
        abstractYesradioButton->setText(QApplication::translate("SettingsDialog", "Title And Abstract", 0, QApplication::UnicodeUTF8));
        autoMarkcheckBox->setText(QApplication::translate("SettingsDialog", "Mark \"Read\" When Moving Next", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsDialog", "Reading", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SettingsDialog", "Old Password", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SettingsDialog", "New Password", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SettingsDialog", "Confirm Password", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsDialog", "Personal", 0, QApplication::UnicodeUTF8));
        ResumeButton->setText(QApplication::translate("SettingsDialog", "Default Settings", 0, QApplication::UnicodeUTF8));
        applypushButton->setText(QApplication::translate("SettingsDialog", "&Apply", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SettingsDialog);
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
