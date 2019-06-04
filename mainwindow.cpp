#include "mainwindow.h"
#include <QMainWindow>
#include <QImage>
#include <QLabel>
#include <QPixmap>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include "imghandling.h"
#include "imgprocessing.h"


using namespace std;


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::updateUi(cv::Mat& img){

    QImage qimg((const uchar*) img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
    qimg.bits();
    ui->img_lbl->setPixmap(QPixmap::fromImage(qimg).scaled(ui->img_lbl->width(), ui->img_lbl->height(), Qt::IgnoreAspectRatio));
}

void MainWindow::on_open_btn_clicked(){

    QString path = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff)"));

    input.imgLoad(path);

    updateUi(input.img);
}

void MainWindow::on_contrast_slider_actionTriggered(int action){

    compute.contrast(input.img, ui->contrast_slider->value());
    updateUi(input.img);
}

void MainWindow::on_exposure_slider_actionTriggered(int action)
{
    int value = ui->exposure_slider->value() - input.old_brightness;


    compute.brightness(input.img, value);

    input.storeValueB(ui->exposure_slider->value());

    updateUi(input.img);
}

void MainWindow::on_grayscale_btn_clicked()
{
    compute.black_n_white(input.img);
    updateUi(input.img);
}

void MainWindow::on_red_slider_actionTriggered(int action)
{
    int value = ui->red_slider->value() - input.old_red;

    compute.gain_red(input.img, value);

    input.storeValueR(ui->red_slider->value());

    updateUi(input.img);
}
