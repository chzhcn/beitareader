#ifndef GROUPCONTROLLER_H
#define GROUPCONTROLLER_H

#include <QObject>
#include "beitareader.h"
#include "user.h"

class GroupController : public QObject
{
    Q_OBJECT

public:
    GroupController();
    GroupController(BeitaReader*,User*);

private:
    BeitaReader *main;
    User *user;
    QString greet;
    QTime readtime;
    void bindData();
};

#endif // GROUPCONTROLLER_H
