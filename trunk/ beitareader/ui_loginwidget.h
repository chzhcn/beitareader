/********************************************************************************
** Form generated from reading ui file 'loginwidget.ui'
**
** Created: Wed Jul 15 17:38:02 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QLabel *label_2;
    QLineEdit *passwordlineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *cancelButton;
    QPushButton *loginButton;
    QGraphicsView *graphicsView;
    QLabel *label_3;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        LoginWidget->resize(400, 300);
        layoutWidget = new QWidget(LoginWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 110, 301, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        namelineEdit = new QLineEdit(layoutWidget);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        gridLayout->addWidget(namelineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwordlineEdit = new QLineEdit(layoutWidget);
        passwordlineEdit->setObjectName(QString::fromUtf8("passwordlineEdit"));

        gridLayout->addWidget(passwordlineEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        horizontalLayout->addWidget(registerButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setDefault(true);

        horizontalLayout->addWidget(loginButton);


        verticalLayout->addLayout(horizontalLayout);

        graphicsView = new QGraphicsView(LoginWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 401, 101));
        label_3 = new QLabel(LoginWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 260, 221, 20));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(namelineEdit);
        label_2->setBuddy(passwordlineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(namelineEdit, passwordlineEdit);
        QWidget::setTabOrder(passwordlineEdit, loginButton);
        QWidget::setTabOrder(loginButton, registerButton);
        QWidget::setTabOrder(registerButton, cancelButton);
        QWidget::setTabOrder(cancelButton, graphicsView);

        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "Login", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginWidget", "&Account", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginWidget", "&Password", 0, QApplication::UnicodeUTF8));
        registerButton->setText(QApplication::translate("LoginWidget", "&Register", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("LoginWidget", "&Cancel", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("LoginWidget", "&Login", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoginWidget", "statusMsg", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(LoginWidget);
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
