/********************************************************************************
** Form generated from reading ui file 'webbrowser.ui'
**
** Created: Thu Jul 9 22:23:50 2009
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
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebBrowser
{
public:

    void setupUi(QWidget *WebBrowser)
    {
        if (WebBrowser->objectName().isEmpty())
            WebBrowser->setObjectName(QString::fromUtf8("WebBrowser"));
        WebBrowser->resize(400, 300);

        retranslateUi(WebBrowser);

        QMetaObject::connectSlotsByName(WebBrowser);
    } // setupUi

    void retranslateUi(QWidget *WebBrowser)
    {
        WebBrowser->setWindowTitle(QApplication::translate("WebBrowser", "Form", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WebBrowser);
    } // retranslateUi

};

namespace Ui {
    class WebBrowser: public Ui_WebBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBBROWSER_H
