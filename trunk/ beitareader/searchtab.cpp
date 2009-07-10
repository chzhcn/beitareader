#include "searchtab.h"
#include "ui_searchtab.h"

SearchTab::SearchTab(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::SearchTab)
{
    m_ui->setupUi(this);
}

SearchTab::~SearchTab()
{
    delete m_ui;
}

void SearchTab::changeEvent(QEvent *e)
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
