#ifndef SEARCHTAB_H
#define SEARCHTAB_H

#include <QtGui/QWidget>

namespace Ui {
    class SearchTab;
}

class SearchTab : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(SearchTab)
public:
    explicit SearchTab(QWidget *parent = 0);
    virtual ~SearchTab();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::SearchTab *m_ui;
};

#endif // SEARCHTAB_H
