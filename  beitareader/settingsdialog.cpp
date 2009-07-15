#include "settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::SettingsDialog)
{
    m_ui->setupUi(this);

    connect(this->ui()->buttonBox,SIGNAL(accepted()),this->ui()->applypushButton,SIGNAL(clicked()));
    connect(this->ui()->abstractYesradioButton,SIGNAL(clicked(bool)),this,SLOT(abstractNoControl(bool)));
    connect(this->ui()->abstractNoradioButton,SIGNAL(clicked(bool)),this,SLOT(abstractYesControl(bool)));
    connect(this->ui()->filterNoradioButton,SIGNAL(clicked(bool)),this,SLOT(filterYesControl(bool)));
    connect(this->ui()->filterYesradioButton,SIGNAL(clicked(bool)),this,SLOT(filterNoControl(bool)));
}

SettingsDialog::~SettingsDialog()
{
    delete m_ui;
}

void SettingsDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

Ui::SettingsDialog* SettingsDialog::ui()
{
    return this->m_ui;
}

void SettingsDialog::on_buttonBox_accepted()
{

}

void SettingsDialog::on_pushButton_clicked()
{

}

void SettingsDialog::abstractNoControl(bool notChosen)
{
    this->ui()->abstractNoradioButton->setChecked(!notChosen);
}

void SettingsDialog::abstractYesControl(bool notChosen)
{
    this->ui()->abstractYesradioButton->setChecked(!notChosen);
}

void SettingsDialog::filterNoControl(bool notChosen)
{
    this->ui()->filterNoradioButton->setChecked(!notChosen);
}

void SettingsDialog::filterYesControl(bool notChosen)
{
    this->ui()->filterYesradioButton->setChecked(!notChosen);
}



void SettingsDialog::on_ResumeButton_clicked()
{
    this->ui()->abstractNoradioButton->setChecked(false);
    this->ui()->abstractYesradioButton->setChecked(true);
    this->ui()->autoMarkcheckBox->setChecked(false);
    this->ui()->autoRefreshcheckBox->setChecked(true);
    this->ui()->filterNoradioButton->setChecked(true);
    this->ui()->filterYesradioButton->setChecked(false);
    this->ui()->refreshTimecomboBox->setCurrentIndex(2);
    this->ui()->saveNumbercomboBox->setCurrentIndex(2);
    this->ui()->startRefreshcheckBox->setChecked(false);
    this->ui()->oldPswlineEdit->setText("");
    this->ui()->newPswlineEdit->setText("");
    this->ui()->confirmlineEdit->setText("");
}

void SettingsDialog::on_applypushButton_clicked()
{
    QString newpsw = "";
    int autorefresh = 0;
    int startrefresh = 0;
    int readfilter = 0;
    int showabs = 0;
    int automark = 0;
    int refreshTime = 0;
    int snumber = 0;

    if((ui()->oldPswlineEdit->text()==this->password)
        &&(ui()->newPswlineEdit->text()==ui()->confirmlineEdit->text()))
    {
        this->password=ui()->newPswlineEdit->text();
        newpsw = this->password;
    }

    if(ui()->autoRefreshcheckBox->isChecked())
    {
        autorefresh=1;
    }
    if(ui()->startRefreshcheckBox->isChecked())
    {
        startrefresh=1;
    }
    if(ui()->filterYesradioButton->isChecked())
    {
        readfilter=1;
    }
    if(ui()->abstractYesradioButton->isChecked())
    {
        showabs=1;
    }
    if(ui()->autoMarkcheckBox->isChecked())
    {
        automark=1;
    }

    switch (this->ui()->refreshTimecomboBox->currentIndex())
    {
        case 0:
            refreshTime=15;
            break;
        case 1:
            refreshTime=30;
            break;
        case 2:
            refreshTime=60;
            break;
        case 3:
            refreshTime=120;
            break;
        case 4:
            refreshTime=240;
            break;
        case 5:
            refreshTime=360;
            break;
        case 6:
            refreshTime=720;
            break;
        case 7:
            refreshTime=1440;
            break;
    }

    switch (this->ui()->saveNumbercomboBox->currentIndex())
    {
        case 0:
            snumber=50;
            break;
        case 1:
            snumber=80;
            break;
        case 2:
            snumber=100;
            break;
        case 3:
            snumber=150;
            break;
        case 4:
            snumber=200;
            break;
    }

    emit finalInfo(newpsw,autorefresh,startrefresh,readfilter,showabs,refreshTime,automark);
}
