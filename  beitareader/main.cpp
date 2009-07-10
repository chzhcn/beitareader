#include <QtGui/QApplication>
#include "beitareader.h"
#include "controlcenter.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Beita.db");
    if(!db.isOpen())
        db.open();

    BeitaReader w;
    ControlCenter c(&w);
    w.show();
    return a.exec();
}
