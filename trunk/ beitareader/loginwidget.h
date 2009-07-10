#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QtGui/QWidget>

namespace Ui {
    class LoginWidget;
}

class LoginWidget : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(LoginWidget)
public:
    explicit LoginWidget(QWidget *parent = 0);
    virtual ~LoginWidget();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::LoginWidget *m_ui;
};

#endif // LOGINWIDGET_H
