#include "rssscrollarea.h"

RSSScrollArea::RSSScrollArea(QWidget *parent) :
    QScrollArea(parent),
    m_ui(new Ui::RSSScrollArea)
{
    m_ui->setupUi(this);
}

RSSScrollArea::RSSScrollArea(QVector<Item*> itemVector, QWidget *parent)
        : QScrollArea(parent), m_ui(new Ui::RSSScrollArea)
{
    m_ui->setupUi(this);
//    itemVector = Item::getItemsByChannelID(channelID);
    vLayout = new QVBoxLayout(this);
    for (int i = 0; i < itemVector.count(); i++) {
        vLayout->addWidget(new Feed(itemVector.at(i)));
    }
}

RSSScrollArea::~RSSScrollArea()
{
    delete vLayout;
    delete m_ui;
}

void RSSScrollArea::changeEvent(QEvent *e)
{
    QScrollArea::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

Ui::RSSScrollArea* RSSScrollArea::ui()
{
    return this->m_ui;
}
