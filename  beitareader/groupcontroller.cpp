#include "groupcontroller.h"

GroupController::GroupController()
{
}

GroupController::GroupController(BeitaReader* _main,User* u)
{
    main = _main;
    user = u;

    panelRefresh();
    bindData();
}

void GroupController::panelRefresh()
{
    myTimer = new QTimer();
    updateTimer = new QTimer();

    connect(myTimer,SIGNAL(timeout()),this,SLOT(myRefresh()));
    myTimer->start(60000);
    connect(updateTimer,SIGNAL(timeout()),this,SLOT(updateRefresh()));
    updateTimer->start(60000 * user->getRefreshTime());
}

void GroupController::myRefresh()
{
    readtime.addMSecs(60000);
    bindData();
    myTimer->start(60000);
}

void GroupController::updateRefresh()
{
    emit downloadRequest(false);
    updateTimer->start(60000 * user->getRefreshTime());
}

void GroupController::bindData()
{
    int hour = QTime::currentTime().hour();
    if((hour >= 6) && (hour <= 11))
    {
        greet = "Good Morning";
    }
    else if ((hour >= 12) && (hour <= 18))
    {
        greet = "Good Afternoon";
    }
    else
    {
        greet = "Good Evening";
    }

    main->ui->groupBox->ui()->greetLabel->setText(this->greet+" , "+user->getName());
    main->ui->groupBox->ui()->reaftimelabel->setText(user->getLastRefresh().toString());
    main->ui->groupBox->ui()->updatetimeLabel->setText(
            QString::number(readtime.hour())+" H "+QString::number(readtime.minute())+" MIN");
}

void GroupController::DownloadDoneRefresh()
{
    user->setLastRefresh(QDateTime::currentDateTime());
    bindData();
}
