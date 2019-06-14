#ifndef GEOMETRICAL_PROCESS_H
#define GEOMETRICAL_PROCESS_H

#include <QDialog>
#include "imghandling.h"
#include "imgprocessing.h"
#include "mainwindow.h"

namespace Ui {
class Geometrical_process;
}

class Geometrical_process : public QDialog
{
    Q_OBJECT

public:
    explicit Geometrical_process(QWidget *parent = nullptr);
    ~Geometrical_process();

private slots:
    void on_rotate_slider_valueChanged(int value);

private:
    Ui::Geometrical_process *ui;

    ImgProcessing process;
    ImgHandling handling;
    MainWindow mainwindow;

};

#endif // GEOMETRICAL_PROCESS_H
