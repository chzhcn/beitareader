#include "searchtab.h"
#include "ui_searchtab.h"

SearchTab::SearchTab(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::SearchTab)
{
    m_ui->setupUi(this);
    connect(m_ui->searchButton_3,SIGNAL(clicked()), this, SLOT(handleSearchButtonClicked()));

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

Ui::SearchTab* SearchTab::ui()
{
    return this->m_ui;
}

void SearchTab::handleSearchButtonClicked()
{
    QVector<Item*> v;
    if(m_ui->categoryComboBox_3->currentText() == "Title")
    {
        v = this->getTheItems(Item::searchByTitle(m_ui->searchLineEdit_3->text()));
    }
    else if(m_ui->categoryComboBox_3->currentText() == "Abstract")
    {
        v =  this->getTheItems(Item::searchByTitle(m_ui->searchLineEdit_3->text()));
    }
    else if(m_ui->categoryComboBox_3->currentText() == "Author")
    {
        v = this->getTheItems(Item::searchByAuthor(m_ui->searchLineEdit_3->text()));
    }
    else if(m_ui->categoryComboBox_3->currentText() == "Web Address")
        v = this->getTheItems(Item::searchByLink(m_ui->searchLineEdit_3->text()));
    emit this->searchResultItems(v);
}

QVector<Item*> SearchTab::getTheItems(QVector<Item*> v0)
{
    QVector<Item*> returnVector;
    QVector<Item*> v;
    QVector<Item*> v1 = Item::searchByPubdate(m_ui->fromDateEdit_3->date(), m_ui->toDateEdit_3->date());
    QVector<Item*> v2;
    if(m_ui->radioButton->isChecked())
        v2 = Item::selectIsRead();
    else if(m_ui->radioButton_2->isChecked())
        v2 = Item::selectNotRead();
    for(int i = 0; i < v1.count(); i++)
       for(int j = 0; j < v2.count(); j++)
           for(int k = 0; k < v0.count(); k++)
                if(v1.at(i)->getID() == v2.at(j)->getID()&&v2.at(j)->getID() == v0.at(k)->getID())
                    returnVector.append(v1.at(i));
    return returnVector;
}
