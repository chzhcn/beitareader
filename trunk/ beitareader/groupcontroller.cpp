#include "groupcontroller.h"

GroupController::GroupController()
{
}

GroupController::GroupController(BeitaReader* _main,User* u)
{
    main = _main;
    user = u;
}

void GroupController::bindData()
{
    main->ui->groupBox->ui()->greetLabel->setText(this->greet+" , "+user->getName());
    main->ui->groupBox->ui()->reaftimelabel->setText(user->getLastRefresh().toString());
    main->ui->groupBox->ui()->updateLabel->setText(this->readtime.toString());
}
