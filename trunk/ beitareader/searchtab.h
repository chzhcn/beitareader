#ifndef SEARCHTAB_H
#define SEARCHTAB_H

#include <QtGui/QWidget>
#include "item.h"
#include <QComboBox>
#include <QVector>
#include <QDateEdit>
#include <QRadioButton>
namespace Ui {
    class SearchTab;
}

class SearchTab : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(SearchTab)
public:
    explicit SearchTab(QWidget *parent = 0);
    virtual ~SearchTab();
    Ui::SearchTab* ui();

protected:
    virtual void changeEvent(QEvent *e);
signals:
        void searchResultItems(QVector<Item*>);
public slots:
    void handleSearchButtonClicked();
private:
    Ui::SearchTab *m_ui;
    QVector<Item*> getTheItems(QVector<Item*>);
};

#endif // SEARCHTAB_H
