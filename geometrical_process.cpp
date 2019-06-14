#include "geometrical_process.h"
#include "ui_geometrical_process.h"
#include "imgprocessing.h"
#include "mainwindow.h"

Geometrical_process::Geometrical_process(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Geometrical_process)
{
    ui->setupUi(this);
}

Geometrical_process::~Geometrical_process()
{
    delete ui;
}

void Geometrical_process::on_rotate_slider_valueChanged(int value)
{
    process.rotate(handling.img, handling.tmp, ui->rotate_slider->value());
    mainwindow.updateUi(handling.tmp);
}
