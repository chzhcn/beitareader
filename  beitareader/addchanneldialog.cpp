#include "addchanneldialog.h"
#include "ui_addchanneldialog.h"

AddChannelDialog::AddChannelDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::AddChannelDialog)
{
    m_ui->setupUi(this);
}

AddChannelDialog::~AddChannelDialog()
{
    delete m_ui;
}

void AddChannelDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
