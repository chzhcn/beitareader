/********************************************************************************
** Form generated from reading ui file 'searchtab.ui'
**
** Created: Wed Jul 15 17:38:02 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SEARCHTAB_H
#define UI_SEARCHTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchTab
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label;
    QLineEdit *searchLineEdit_3;
    QHBoxLayout *horizontalLayout_16;
    QComboBox *categoryComboBox_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_3;
    QDateEdit *fromDateEdit_3;
    QHBoxLayout *horizontalLayout_19;
    QLabel *toLabel_3;
    QDateEdit *toDateEdit_3;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *searchButton_3;

    void setupUi(QWidget *SearchTab)
    {
        if (SearchTab->objectName().isEmpty())
            SearchTab->setObjectName(QString::fromUtf8("SearchTab"));
        SearchTab->resize(302, 152);
        formLayout = new QFormLayout(SearchTab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label = new QLabel(SearchTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_15->addWidget(label);

        searchLineEdit_3 = new QLineEdit(SearchTab);
        searchLineEdit_3->setObjectName(QString::fromUtf8("searchLineEdit_3"));

        horizontalLayout_15->addWidget(searchLineEdit_3);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        categoryComboBox_3 = new QComboBox(SearchTab);
        categoryComboBox_3->setObjectName(QString::fromUtf8("categoryComboBox_3"));

        horizontalLayout_16->addWidget(categoryComboBox_3);

        radioButton = new QRadioButton(SearchTab);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_16->addWidget(radioButton);

        radioButton_2 = new QRadioButton(SearchTab);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_16->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_3 = new QLabel(SearchTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_18->addWidget(label_3);

        fromDateEdit_3 = new QDateEdit(SearchTab);
        fromDateEdit_3->setObjectName(QString::fromUtf8("fromDateEdit_3"));
        fromDateEdit_3->setCalendarPopup(true);

        horizontalLayout_18->addWidget(fromDateEdit_3);


        horizontalLayout_17->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        toLabel_3 = new QLabel(SearchTab);
        toLabel_3->setObjectName(QString::fromUtf8("toLabel_3"));

        horizontalLayout_19->addWidget(toLabel_3);

        toDateEdit_3 = new QDateEdit(SearchTab);
        toDateEdit_3->setObjectName(QString::fromUtf8("toDateEdit_3"));
        toDateEdit_3->setCalendarPopup(true);

        horizontalLayout_19->addWidget(toDateEdit_3);


        horizontalLayout_17->addLayout(horizontalLayout_19);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_9);

        searchButton_3 = new QPushButton(SearchTab);
        searchButton_3->setObjectName(QString::fromUtf8("searchButton_3"));

        horizontalLayout_20->addWidget(searchButton_3);


        verticalLayout->addLayout(horizontalLayout_20);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(searchLineEdit_3);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(searchLineEdit_3, categoryComboBox_3);
        QWidget::setTabOrder(categoryComboBox_3, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, fromDateEdit_3);
        QWidget::setTabOrder(fromDateEdit_3, toDateEdit_3);
        QWidget::setTabOrder(toDateEdit_3, searchButton_3);

        retranslateUi(SearchTab);

        QMetaObject::connectSlotsByName(SearchTab);
    } // setupUi

    void retranslateUi(QWidget *SearchTab)
    {
        SearchTab->setWindowTitle(QApplication::translate("SearchTab", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SearchTab", "Sea&rch: ", 0, QApplication::UnicodeUTF8));
        categoryComboBox_3->clear();
        categoryComboBox_3->insertItems(0, QStringList()
         << QApplication::translate("SearchTab", "Title", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SearchTab", "Abstract", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SearchTab", "Author", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SearchTab", "Web Address", 0, QApplication::UnicodeUTF8)
        );
        radioButton->setText(QApplication::translate("SearchTab", "&Read", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("SearchTab", "&NotRead", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SearchTab", "From:", 0, QApplication::UnicodeUTF8));
        toLabel_3->setText(QApplication::translate("SearchTab", "To:", 0, QApplication::UnicodeUTF8));
        searchButton_3->setText(QApplication::translate("SearchTab", "&Search", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SearchTab);
    } // retranslateUi

};

namespace Ui {
    class SearchTab: public Ui_SearchTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHTAB_H
