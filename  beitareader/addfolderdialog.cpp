#include "addfolderdialog.h"
#include "ui_addfolderdialog.h"

AddFolderDialog::AddFolderDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::AddFolderDialog)
{
    m_ui->setupUi(this);
}

AddFolderDialog::~AddFolderDialog()
{
    delete m_ui;
}

void AddFolderDialog::changeEvent(QEvent *e)
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
