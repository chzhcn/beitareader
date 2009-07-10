#include "loginwidget.h"
#include "ui_loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::LoginWidget)
{
    m_ui->setupUi(this);
}

LoginWidget::~LoginWidget()
{
    delete m_ui;
}

void LoginWidget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

Ui::LoginWidget* LoginWidget::ui()
{
    return this->m_ui;
}
