#include <QtGui/QApplication>
#include "nlogincontroller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Beita.db");
    if(!db.isOpen())
        db.open();

    BeitaReader w;
    LoginWidget l;
    LoginController lc(&l,&w);
    l.show();

    return a.exec();
}
