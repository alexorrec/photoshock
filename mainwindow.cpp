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

void MainWindow::closeEvent(QCloseEvent *event){
    cerr<<"wish to save?"<<endl;
}
void MainWindow::on_open_btn_clicked(){

    QString path = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    input.imgLoad(path);

    updateUi(input.img);
}

void MainWindow::on_contrast_slider_actionTriggered(){

    input.contrast_val = ui->contrast_slider->value();
    compute.processMaster(input.img, input.tmp, input.exposure_val, input.red_val, input.green_val, input.blue_val, input.contrast_val);
    updateUi(input.tmp);
}

void MainWindow::on_exposure_slider_actionTriggered(){

    input.exposure_val = ui->exposure_slider->value();
    compute.processMaster(input.img, input.tmp, input.exposure_val, input.red_val, input.green_val, input.blue_val, input.contrast_val);
    updateUi(input.tmp);
}

void MainWindow::on_grayscale_btn_clicked(){

    compute.black_n_white(input.img);
    updateUi(input.img);
}

void MainWindow::on_red_slider_actionTriggered(){

    input.red_val = ui->red_slider->value();

    compute.processMaster(input.img, input.tmp, input.exposure_val, input.red_val, input.green_val, input.blue_val, input.contrast_val);

    updateUi(input.tmp);
}

void MainWindow::on_green_slider_actionTriggered(){

    input.green_val = ui->green_slider->value();

    compute.processMaster(input.img, input.tmp, input.exposure_val, input.red_val, input.green_val, input.blue_val, input.contrast_val);

    updateUi(input.tmp);
}

void MainWindow::on_blue_slider_actionTriggered(){

    input.blue_val = ui->blue_slider->value();

    compute.processMaster(input.img, input.tmp, input.exposure_val, input.red_val, input.green_val, input.blue_val, input.contrast_val);

    updateUi(input.tmp);
}

void MainWindow::on_reset_brn_clicked(){
    input.tmp = input.img.clone();
    updateUi(input.tmp);
}

void MainWindow::on_saturation_slider_actionTriggered(){

    compute.saturation(input.img, input.tmp, ui->saturation_slider->value());
    updateUi(input.img);
}
