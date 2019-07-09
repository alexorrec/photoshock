#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Model* model = new Model;
    Controller* controller = new Controller(model);
    MainWindow view(model, controller);
    view.show();
    return QApplication::exec();
}
