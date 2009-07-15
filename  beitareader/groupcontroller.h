#ifndef GROUPCONTROLLER_H
#define GROUPCONTROLLER_H

#include <QObject>
#include "beitareader.h"
#include "user.h"
#include "channel.h"

class GroupController : public QObject
{
    Q_OBJECT

public:
    GroupController();
    GroupController(BeitaReader*,User*);

private slots:
    void myRefresh();
    void updateRefresh();

private:
    BeitaReader *main;
    User *user;
    QString greet;
    QTime readtime;
    QTimer *myTimer;
    QTimer *updateTimer;
    void bindData();
    void panelRefresh();

public slots:
    void DownloadDoneRefresh();

    signals:
    void downloadRequest(bool);
};

#endif // GROUPCONTROLLER_H
