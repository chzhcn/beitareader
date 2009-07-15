#include "channelarea.h"

ChannelArea::ChannelArea(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::ChannelArea)
{
    m_ui->setupUi(this);

//    rssWidget = new RSSWidget(feedVector);


//    QLabel *l = new QLabel("TESTTESTEST", this);
//    m_ui->scrollArea->setWidget(l);
//    m_ui->scrollArea->viewport()->setAutoFillBackground(true);
//    m_ui->scrollArea->setWidgetResizable(true);
//    m_ui->scrollArea->setFocusPolicy(Qt::NoFocus);
//    m_ui->scrollArea->setFrameStyle(QFrame::NoFrame);
//    m_ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

//Feed::Feed(Item *item, QWidget *parent)
//        : QWidget(parent), m_ui(new Ui::Feed)

//ChannelArea::ChannelArea(int channelID, QWidget *parent)
//        : QWidget(parent), m_ui(new Ui::ChannelArea)
//{
//    m_ui->setupUi(this);
//    scrollWidget = new RSSScrollArea(channelID, this);
//
//}

ChannelArea::ChannelArea(QVector<Feed*> feedVector, QWidget *parent)
        : QWidget(parent), m_ui(new Ui::ChannelArea)
{
    m_ui->setupUi(this);

    rssWidget = new RSSWidget(feedVector);
    m_ui->scrollArea->setWidget(rssWidget);
    m_ui->scrollArea->viewport()->setAutoFillBackground(true);
    m_ui->scrollArea->setWidgetResizable(true);
    m_ui->scrollArea->setFocusPolicy(Qt::NoFocus);
    m_ui->scrollArea->setFrameStyle(QFrame::NoFrame);
    m_ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

//    scrollWidget = new QScrollWidget(itemVector, this);
//    newRadioButton = findChild<QRadioButton*>("newRadioButton");
//    allRadioButton = findChild<QRadioButton*>("allRadioButton");
//    allReadButton = findChild<QPushButton*>("allReadButton");
//    refreshButton = findChild<QPushButton*>("refreshButton");
//    sortComboBox = findChild<QComboBox*>("expandedRaidoButton");
//    expandedRaidoButton = findChild<QRadioButton*>("expandedRaidoButton");
//    listRadioButton = findChild<QRadioButton*>("listRadioButton");
//    itemButtonGroup.addButton(newRadioButton, NewRadioButton);
//    itemButtonGroup.addButton(allRadioButton, AllRadioButton);
//    showButtonGroup.addButton(expandedRaidoButton, ExpandedButton);
//    showButtonGroup.addButton(listRadioButton, ListButton);
//    newRadioButton->setChecked(true);
//    expandedRaidoButton->setChecked(true);

//    QButtonGroup itemButtonGroup(this);
//    QButtonGroup showButtonGroup(this);
//    itemButtonGroup.addButton(m_ui->newItemsRadioButton, NewRadioButton);
//    itemButtonGroup.addButton(m_ui->allItemsButton, AllRadioButton);
//    showButtonGroup.addButton(m_ui->expandedRadioButton, ExpandedButton);
//    showButtonGroup.addButton(m_ui->listRadioButton, ListButton);
//    itemButtonGroup.addButton(m_ui->newItemsRadioButton);
//    itemButtonGroup.addButton(m_ui->allItemsButton);
//    showButtonGroup.addButton(m_ui->expandedRadioButton);
//    showButtonGroup.addButton(m_ui->listRadioButton);
//    m_ui->newItemsRadioButton->setChecked(true);
//    m_ui->expandedRadioButton->setChecked(true);




ChannelArea::~ChannelArea()
{
    delete m_ui;
//    delete scrollWidget;
}

Ui::ChannelArea* ChannelArea::ui()
{
    return this->m_ui;
}

void ChannelArea::changeEvent(QEvent *e)
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
