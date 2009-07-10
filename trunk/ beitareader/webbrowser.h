#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#include <QtGui/QWidget>

namespace Ui {
    class WebBrowser;
}

class WebBrowser : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(WebBrowser)
public:
    explicit WebBrowser(QWidget *parent = 0);
    virtual ~WebBrowser();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::WebBrowser *m_ui;
};

#endif // WEBBROWSER_H
