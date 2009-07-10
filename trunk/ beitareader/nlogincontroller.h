#ifndef NLOGINCONTROLLER_H
#define NLOGINCONTROLLER_H

#include <QObject>
#include "loginwidget.h"
#include "user.h"
#include "beitareader.h"
#include "controlcenter.h"
#include "registerdialog.h"

class LoginController : public QObject
{
    Q_OBJECT

public:
    LoginController();
    LoginController(LoginWidget*,BeitaReader*);
    ~LoginController();
    User user;

public slots:
    void registers();
    void login();
    void registerSubmit(QString,QString,QString);

private:
    LoginWidget *loginControl;
    BeitaReader *main;
};

#endif // NLOGINCONTROLLER_H
