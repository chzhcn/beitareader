#include "nlogincontroller.h"

LoginController::LoginController()
{
}

LoginController::LoginController(LoginWidget* _login,BeitaReader* _main)
{
    loginControl=_login;
    main=_main;
    connect(loginControl->ui()->registerButton,SIGNAL(clicked()),this,SLOT(registers()));
    connect(loginControl->ui()->loginButton,SIGNAL(clicked()),this,SLOT(login()));
    connect(loginControl->ui()->cancelButton,SIGNAL(clicked()),loginControl,SLOT(close()));
}

LoginController::~LoginController()
{
}

void LoginController::login()
{   
    QString name=loginControl->ui()->namelineEdit->text();
    QString password=loginControl->ui()->passwordlineEdit->text();

    if(User::checkPassword(name,password)!=0)
    {
        this->user=User::getUserByName("WS");
        ControlCenter(main,user);
        loginControl->close();
        main->show();
    }
    else
    {
        loginControl->ui()->passwordlineEdit->setText("");
        loginControl->ui()->label_3->setText("Incorrect User Info");
    }
}

void LoginController::registers()
{
    RegisterDialog *rd=new RegisterDialog();
    rd->show();

    connect(rd,SIGNAL(registerSubmit(QString,QString,QString)),this,SLOT(registerSubmit(QString,QString,QString)));
}

void LoginController::registerSubmit(QString name,QString psw1,QString psw2)
{
    if(psw1==psw2)
    {
        User::createUser(name,psw1);
        loginControl->ui()->label_3->setText("Successful Register!");
    }
    else
    {
        loginControl->ui()->label_3->setText("Passwords not the same!");
    }
}
