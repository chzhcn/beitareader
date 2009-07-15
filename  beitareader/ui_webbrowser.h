/********************************************************************************
** Form generated from reading ui file 'webbrowser.ui'
**
** Created: Wed Jul 15 17:38:02 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WEBBROWSER_H
#define UI_WEBBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "channelarea.h"

QT_BEGIN_NAMESPACE

class Ui_WebBrowser
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *backwardToolButton;
    QToolButton *forwardToolButton;
    QToolButton *stopToolButton;
    QToolButton *refreshToolButton;
    QToolButton *fullScreenToolButton;
    QToolButton *checkRSSButton;
    QLineEdit *lineEdit;
    QTabWidget *tabWidget;
    ChannelArea *listTab;

    void setupUi(QWidget *WebBrowser)
    {
        if (WebBrowser->objectName().isEmpty())
            WebBrowser->setObjectName(QString::fromUtf8("WebBrowser"));
        WebBrowser->resize(368, 99);
        gridLayout = new QGridLayout(WebBrowser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backwardToolButton = new QToolButton(WebBrowser);
        backwardToolButton->setObjectName(QString::fromUtf8("backwardToolButton"));

        horizontalLayout->addWidget(backwardToolButton);

        forwardToolButton = new QToolButton(WebBrowser);
        forwardToolButton->setObjectName(QString::fromUtf8("forwardToolButton"));

        horizontalLayout->addWidget(forwardToolButton);

        stopToolButton = new QToolButton(WebBrowser);
        stopToolButton->setObjectName(QString::fromUtf8("stopToolButton"));

        horizontalLayout->addWidget(stopToolButton);

        refreshToolButton = new QToolButton(WebBrowser);
        refreshToolButton->setObjectName(QString::fromUtf8("refreshToolButton"));

        horizontalLayout->addWidget(refreshToolButton);

        fullScreenToolButton = new QToolButton(WebBrowser);
        fullScreenToolButton->setObjectName(QString::fromUtf8("fullScreenToolButton"));

        horizontalLayout->addWidget(fullScreenToolButton);

        checkRSSButton = new QToolButton(WebBrowser);
        checkRSSButton->setObjectName(QString::fromUtf8("checkRSSButton"));

        horizontalLayout->addWidget(checkRSSButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        lineEdit = new QLineEdit(WebBrowser);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget = new QTabWidget(WebBrowser);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        listTab = new ChannelArea();
        listTab->setObjectName(QString::fromUtf8("listTab"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listTab->sizePolicy().hasHeightForWidth());
        listTab->setSizePolicy(sizePolicy2);
        tabWidget->addTab(listTab, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(WebBrowser);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WebBrowser);
    } // setupUi

    void retranslateUi(QWidget *WebBrowser)
    {
        WebBrowser->setWindowTitle(QApplication::translate("WebBrowser", "Form", 0, QApplication::UnicodeUTF8));
        backwardToolButton->setText(QApplication::translate("WebBrowser", "...", 0, QApplication::UnicodeUTF8));
        forwardToolButton->setText(QApplication::translate("WebBrowser", "...", 0, QApplication::UnicodeUTF8));
        stopToolButton->setText(QApplication::translate("WebBrowser", "...", 0, QApplication::UnicodeUTF8));
        refreshToolButton->setText(QApplication::translate("WebBrowser", "...", 0, QApplication::UnicodeUTF8));
        fullScreenToolButton->setText(QApplication::translate("WebBrowser", "...", 0, QApplication::UnicodeUTF8));
        checkRSSButton->setText(QApplication::translate("WebBrowser", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(listTab), QApplication::translate("WebBrowser", "Temp Name", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WebBrowser);
    } // retranslateUi

};

namespace Ui {
    class WebBrowser: public Ui_WebBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBBROWSER_H
