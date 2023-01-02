#include "Serveur_TCP.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Serveur_TCP w;
    w.show();
    return a.exec();
}
