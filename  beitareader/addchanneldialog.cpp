#include "addchanneldialog.h"

AddChannelDialog::AddChannelDialog(int currentItemID, QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::AddChannelDialog)
{
    m_ui->setupUi(this);
    this->buttonBox = findChild<QDialogButtonBox*>("buttonBox");
    buttonBox->buttons().at(0)->setDisabled(true);
    folderLine = findChild<QLineEdit*>("folderLine");
    urlLine = findChild<QLineEdit*>("urlLine");
    nameLine = findChild<QLineEdit*>("nameLine");
    this->dirTree = findChild<QTreeWidget*>("dirTree");
    checkRssButton = findChild<QPushButton*>("checkRssButton");
    QVector<Folder*> folders = Folder::getAllFolder();
    for (int i = 0; i < folders.count(); i++)
    {
        if (folders.at(i)->getParentID() == 0)
        {
            QTreeWidgetItem *item = new QTreeWidgetItem(dirTree, 1000);
            item->setText(0, folders.at(i)->getFolderName());
            item->setData(0, 1, folders.at(i)->getFolderID());
            if (folders.at(i)->getFolderID() == currentItemID)
            {
                item->setSelected(true);
                folderLine->setText(folders.at(i)->getFolderName());
            }

            if (folders.at(i)->getChildFolder().count() != 0)
            {
                QVector<Folder*> subFolders = folders.at(i)->getChildFolder();
                setupFolder(item, subFolders, currentItemID);
            }
        }
    }
    connect(dirTree, SIGNAL(itemClicked(QTreeWidgetItem*,int)), this, SLOT(handleFolderSelected(QTreeWidgetItem*,int)));
    connect(checkRssButton, SIGNAL(clicked()), this, SLOT(handleCheckClicked()));
    connect(buttonBox->buttons().at(0),SIGNAL(clicked()), this, SLOT(handleOkClicked()));
    connect(urlLine,SIGNAL(textChanged(QString)),this,SLOT(inputUrlChanged(QString)));
}

void AddChannelDialog::setupFolder(QTreeWidgetItem *item, QVector<Folder*> folders, int id)
{
    for (int i = 0; i < folders.count(); i++)
    {
        QTreeWidgetItem *subItem = new QTreeWidgetItem(item, 1000);
        subItem->setText(0, folders.at(i)->getFolderName());
        subItem->setData(0, 1, folders.at(i)->getFolderID());
        if (folders.at(i)->getFolderID() == id)
        {
            subItem->setSelected(true);
            folderLine->setText(folders.at(i)->getFolderName());
        }

        if (folders.at(i)->getChildFolder().count() != 0)
        {
            QVector<Folder*> subFolders = folders.at(i)->getChildFolder();
            setupFolder(item, subFolders, id);
        }
    }
}

AddChannelDialog::~AddChannelDialog()
{
    delete m_ui;
}

void AddChannelDialog::changeEvent(QEvent *e)
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

void AddChannelDialog::handleFolderSelected(QTreeWidgetItem *item, int index)
{
    this->folderLine->setText(item->text(0));
}

void AddChannelDialog::handleCheckClicked()
{
    checkTheRss = new CheckTheRss(QUrl(this->urlLine->text()));
    checkTheRss->fetch();
    connect(checkTheRss, SIGNAL(isCheckRssSuccess(bool)), this, SLOT(handleCheckResult(bool)));
}

void AddChannelDialog::handleCheckResult(bool flag)
{
    if (flag)
    {
        //QMessageBox::about(this, "Check Result", "The URL is a valid RSS.\n You can add it now.");
        buttonBox->buttons().at(0)->setEnabled(true);
    }
    else
    {
       // QMessageBox::warning(this, "Check Result", "The URL is INVALID!");
    }
}

void AddChannelDialog::handleOkClicked()
{
    if (folderLine->text()=="")
    {
        QMessageBox::warning(this, "Error", "Please select a folder");
    }
    else
    {
        int parentId = dirTree->currentItem()->data(0, 1).toInt();
        //QMessageBox::about(0, "Insert Channel", dirTree->currentItem()->text(0));
        QString name = nameLine->text();
        Channel *newChannel = new Channel(name,urlLine->text(), parentId,0,1,0,0);
        //QMessageBox::about(0, "Insert Channel", QString::number(parentId));
        Channel::insertChannel(*newChannel);
        int id = newChannel->getChannelID();
        //QMessageBox::about(0, "Insert Channel", "inserted"+QString::number(id));
        emit addChannelFinished(parentId, id, name);
    }
}

void AddChannelDialog::inputUrlChanged(QString curText)
{
    buttonBox->buttons().at(0)->setEnabled(false);
}
