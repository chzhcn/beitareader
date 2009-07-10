#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::RegisterDialog)
{
    m_ui->setupUi(this);
}

RegisterDialog::~RegisterDialog()
{
    delete m_ui;
}

void RegisterDialog::changeEvent(QEvent *e)
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

Ui::RegisterDialog* RegisterDialog::ui()
{
    return this->m_ui;
}

void RegisterDialog::on_buttonBox_accepted()
{
    emit registerSubmit(m_ui->namelineEdit->text()
                        ,m_ui->passwordlineEdit->text()
                        ,m_ui->passwordlineEdit2->text()
                    );
}
