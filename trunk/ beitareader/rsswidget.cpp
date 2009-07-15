#include "rsswidget.h"

RSSWidget::RSSWidget()
{
}

RSSWidget::RSSWidget(QVector<Feed*> feedVector, QWidget *parent)
        : QWidget(parent)//, m_ui(new Ui::RSSScrollArea)
{
    vLayout = new QVBoxLayout(this);
    for (int i = 0; i < feedVector.count(); i++)
    {
        vLayout->addWidget(feedVector.at(i));
    }
}

RSSWidget::~RSSWidget()
{
    delete vLayout;
//    delete m_ui;
}
