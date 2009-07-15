#include "feed.h"

Feed::Feed(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::Feed)
{
    m_ui->setupUi(this);
}

Feed::Feed(Item *item, QWidget *parent)
        : QWidget(parent), m_ui(new Ui::Feed)
{
    m_ui->setupUi(this);
    this->item = item;
    titleLabel = this->findChild<QLabel*>("titleLabel");
    timeLabel = this->findChild<QLabel*>("timeLabel");
    textBrowser = this->findChild<QTextBrowser*>("textBrowser");
    starCheckBox = this->findChild<QCheckBox*>("starCheckBox");
    unreadCheckBox = this->findChild<QCheckBox*>("unreadCheckBox");
    html = new QString("<a href='" + item->getLink() + "'>" + item->getTitle() + "</a>");
    titleLabel->setText(*html);
    timeLabel->setText(item->getPubdate().toString());
    textBrowser->setReadOnly(true);
//    textBrowser->
    textBrowser->setHtml(item->getDescription());
    textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

//    connect
//    connect(starCheckBox, SIGNAL(
//    this->starCheckBox, SIGNAL(clicked(bool)),
}

Ui::Feed* Feed::ui()
{
    return this->m_ui;
}

//Feed::Fedd(QString *title, QString *abstract, QWidget *parent)
//        :Feed(parent)
//{
////    this->title = title;
////    this->abstract = abstract;
//
//}

//QString& Feed::toHtml(const QString &link, const QString &title)
//{
//    QString
//    return html;
//}

Feed::~Feed()
{
    delete html;
    html = 0;
    delete m_ui;
}

void Feed::changeEvent(QEvent *e)
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

//改下collection
void Feed::handleStarToggled(int isChecked)
{
    if (this->ui()->starCheckBox->isChecked())
    {
        Collection::deleteCollectionByID(item->getID());
    }
    else
    {
        //差API
    }
//    if (isChecked)
//    {
////        Collection::insertCollrection
////                (Collection(item, ControlCenter::getUser()->getUserID()));
////        Collection c = new Collection::deleteCollectionByID(item->getID());
//        Collection::deleteCollectionByID(item->getID());
//    }
//    else
//    {
//
////        Collection::insertCollection(
////        Collection::deleteCollection(
//    }
}

void Feed::handleUnreadToggled(int isChecked)
{
    if (this->ui()->unreadCheckBox->isChecked())
    {
        item->setIsread(f);
    }
    else
    {
        item->setIsread(t);
    }
//    if (isChecked)
//    {
//        item->setIsread(f);
//    }
//    else
//    {
//        item->setIsread(t);
//    }
}

Item* Feed::getItem()
{
    return item;
}
