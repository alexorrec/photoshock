#include "mainwindow.h"
#include <QMainWindow>
#include <QImage>
#include <QLabel>
#include <QPixmap>
#include <QString>
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include "imghandling.h"
#include "imgprocessing.h"
#include "hsl_dlg.h"
#include "geometrical_process.h"


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
    ui->img_lbl->setPixmap(QPixmap::fromImage(qimg).scaled(ui->img_lbl->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    //pixmap.scaled(lblImage->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void MainWindow::closeEvent(QCloseEvent *event){

    // implementare possibilità di salvataggio
    message.critical(nullptr, "Error","Wish to save?:");
    message.setFixedSize(500,200);
}

void MainWindow::on_open_btn_clicked(){

    QString path = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    handling.imgLoad(path);

    updateUi(handling.img);
}

void MainWindow::on_save_btn_clicked(){

    QString path = QFileDialog::getSaveFileName(nullptr, QObject::tr("Save File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    handling.imgSave(path, handling.tmp);

}

void MainWindow::on_HSL_btn_clicked(){
    HSL_dlg hsl_dlg;
    hsl_dlg.setModal(true);
    hsl_dlg.exec();
}

void MainWindow::on_reset_btn_clicked(){
    handling.tmp = handling.img.clone();
    updateUi(handling.tmp);
}


void MainWindow::on_exposure_slider_valueChanged(){

    handling.exposure_val = ui->exposure_slider->value();
    compute.processMaster(handling.img, handling.tmp, handling.exposure_val, handling.red_val, handling.green_val, handling.blue_val, handling.contrast_val);
    updateUi(handling.tmp);

}

void MainWindow::on_contrast_slider_valueChanged(){

    handling.contrast_val = ui->contrast_slider->value();
    compute.processMaster(handling.img, handling.tmp, handling.exposure_val, handling.red_val, handling.green_val, handling.blue_val, handling.contrast_val);
    updateUi(handling.tmp);

}


void MainWindow::on_red_slider_valueChanged(){

    handling.red_val = ui->red_slider->value();
    compute.processMaster(handling.img, handling.tmp, handling.exposure_val, handling.red_val, handling.green_val, handling.blue_val, handling.contrast_val);
    updateUi(handling.tmp);
}

void MainWindow::on_green_slider_valueChanged(){

    handling.green_val = ui->green_slider->value();
    compute.processMaster(handling.img, handling.tmp, handling.exposure_val, handling.red_val, handling.green_val, handling.blue_val, handling.contrast_val);
    updateUi(handling.tmp);

}

void MainWindow::on_blue_slider_valueChanged(){

    handling.blue_val = ui->blue_slider->value();
    compute.processMaster(handling.img, handling.tmp, handling.exposure_val, handling.red_val, handling.green_val, handling.blue_val, handling.contrast_val);
    updateUi(handling.tmp);

}


void MainWindow::on_grayscale_btn_clicked(){

    compute.black_n_white(handling.img);
    updateUi(handling.img);
}

void MainWindow::on_geometry_btn_clicked()
{
    Geometrical_process distort;
    distort.setModal(true);
    distort.exec();
}
