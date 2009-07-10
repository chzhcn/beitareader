#include "brgroupbox.h"
#include "ui_brgroupbox.h"

BRGroupBox::BRGroupBox(QWidget *parent) :
    QGroupBox(parent),
    m_ui(new Ui::BRGroupBox)
{
    m_ui->setupUi(this);
}

BRGroupBox::~BRGroupBox()
{
    delete m_ui;
}

void BRGroupBox::changeEvent(QEvent *e)
{
    QGroupBox::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

Ui::BRGroupBox* BRGroupBox::ui()
{
    return this->m_ui;
}
