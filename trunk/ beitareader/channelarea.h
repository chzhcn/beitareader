#ifndef CHANNELAREA_H
#define CHANNELAREA_H

#include <QtGui/QWidget>
#include "rsswidget.h"
#include "ui_channelarea.h"

namespace Ui {
    class ChannelArea;
}

//class RSSScrollArea;

class ChannelArea : public QWidget {
    enum itemButton {NewRadioButton = 0, AllRadioButton = 1};
    enum showButton {ExpandedButton = 0, ListButton = 1};

    Q_OBJECT
    Q_DISABLE_COPY(ChannelArea)
public:
    explicit ChannelArea(QWidget *parent = 0);
//    explicit ChannelArea(int channelID, QWidget* parent = 0);
    explicit ChannelArea(QVector<Feed*>, QWidget* parent = 0);
    virtual ~ChannelArea();
    Ui::ChannelArea* ui();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::ChannelArea *m_ui;
    RSSWidget* rssWidget;
//    QButtonGroup itemButtonGroup;
//    QButtonGroup showButtonGroup;
//    QRadioButton *newRadioButton;
//    QRadioButton *allRadioButton;
//    QPushButton *allReadButton;
//    QPushButton *refreshButton;
//    QComboBox *sortComboBox;
//    QRadioButton *expandedRaidoButton;
//    QRadioButton *listRadioButton;
//    RSSScrollArea *scrollWidget;
//    QWidget *scrollWidget;

};

#endif // CHANNELAREA_H
