#include "addfolderdialog.h"

AddFolderDialog::AddFolderDialog(int currentItemID, QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::AddFolderDialog)
{
    m_ui->setupUi(this);
    dirTree = findChild<QTreeWidget*>("dirTree");
    parentFolderLine = findChild<QLineEdit*>("parentFolderLine");
    nameLine = findChild<QLineEdit*>("nameLine");
    rootButton = findChild<QPushButton*>("rootButton");
    buttonBox = findChild<QDialogButtonBox*>("buttonBox");
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
                parentFolderLine->setText(folders.at(i)->getFolderName());
            }

            if (folders.at(i)->getChildFolder().count() != 0)
            {
                QVector<Folder*> subFolders = folders.at(i)->getChildFolder();
                setupFolder(item, subFolders, currentItemID);
            }
        }
    }
    connect(dirTree, SIGNAL(itemClicked(QTreeWidgetItem*,int)), this, SLOT(handleFolderSelected(QTreeWidgetItem*,int)));
    connect(this->rootButton, SIGNAL(clicked()), this, SLOT(handleRootClicked()));
    connect(this->buttonBox->buttons().at(0), SIGNAL(clicked()), this, SLOT(handleOKClicked()));
}

void AddFolderDialog::setupFolder(QTreeWidgetItem *item, QVector<Folder*> folders, int id)
{
     for (int i = 0; i < folders.count(); i++)
    {
        QTreeWidgetItem *subItem = new QTreeWidgetItem(item, 1000);
        subItem->setText(0, folders.at(i)->getFolderName());
        subItem->setData(0, 1, folders.at(i)->getFolderID());
        if (folders.at(i)->getFolderID() == id)
        {
            subItem->setSelected(true);
            parentFolderLine->setText(folders.at(i)->getFolderName());
        }

        if (folders.at(i)->getChildFolder().count() != 0)
        {
            QVector<Folder*> subFolders = folders.at(i)->getChildFolder();
            setupFolder(subItem, subFolders, id);
        }
    }
 }

AddFolderDialog::~AddFolderDialog()
{
    delete m_ui;
}

void AddFolderDialog::changeEvent(QEvent *e)
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

void AddFolderDialog::handleFolderSelected(QTreeWidgetItem *item, int index)
{
    this->parentFolderLine->setText(item->text(0));
}

void AddFolderDialog::handleRootClicked()
{
    this->parentFolderLine->setText("");
}

void AddFolderDialog::handleOKClicked()
{
    if (this->nameLine->text() != "")
    {
        int id = 0;
        if (this->parentFolderLine->text() == "")
        {
            id = Folder::createRootFolder(this->nameLine->text(), 1)->getFolderID();//1 userID
            emit addFolderFinished(0, id, this->nameLine->text());
        }
        else
        {
            int parentID = this->dirTree->currentItem()->data(0, 1).toInt();
            id = Folder::getFolderByID(parentID)->createChildFolder(this->nameLine->text())->getFolderID();
            emit addFolderFinished(parentID, id, this->nameLine->text());
        }
    }
}



