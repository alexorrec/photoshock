#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto* model = new Model;
    auto* controller = new Controller(model);

    MainWindow view(model, controller);
    view.show();
    return QApplication::exec();
}
