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
#include "imgdistortions.h"


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
}

void MainWindow::closeEvent(QCloseEvent *event){

    // implementare possibilità di salvataggio
    message.critical(nullptr, "Error","Wish to save?:");
    message.setFixedSize(500,200);
}

void MainWindow::on_open_btn_clicked(){

    QString path = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    handling.imgLoad(master.img, master.tmp, path);

    updateUi(master.img);

    ui->red_slider->setEnabled(true);
    ui->red_spin->setEnabled(true);

    ui->green_slider->setEnabled(true);
    ui->green_spin->setEnabled(true);

    ui->blue_slider->setEnabled(true);
    ui->blue_spin->setEnabled(true);

    ui->exposure_slider->setEnabled(true);
    ui->exposure_spin->setEnabled(true);

    ui->contrast_slider->setEnabled(true);
    ui->contrast_spin->setEnabled(true);

    ui->reset_btn->setEnabled(true);
    ui->hsl_btn->setEnabled(true);

}

void MainWindow::on_save_btn_clicked(){

    QString path = QFileDialog::getSaveFileName(nullptr, QObject::tr("Save File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    handling.imgSave(path, master.tmp);

}

void MainWindow::on_reset_btn_clicked(){
    master.tmp = master.img.clone();
    updateUi(master.tmp);
}

void MainWindow::on_exposure_slider_valueChanged(){

    master.exposure_val = ui->exposure_slider->value();
    compute.processMaster(master.img, master.tmp, master.exposure_val, master.red_val, master.green_val, master.blue_val, master.contrast_val);
    updateUi(master.tmp);

}

void MainWindow::on_contrast_slider_valueChanged(){

    master.contrast_val = ui->contrast_slider->value();
    compute.processMaster(master.img, master.tmp, master.exposure_val, master.red_val, master.green_val, master.blue_val, master.contrast_val);
    updateUi(master.tmp);

}

void MainWindow::on_red_slider_valueChanged(){

    master.red_val = ui->red_slider->value();
    compute.processMaster(master.img, master.tmp, master.exposure_val, master.red_val, master.green_val, master.blue_val, master.contrast_val);
    updateUi(master.tmp);
}

void MainWindow::on_green_slider_valueChanged(){

    master.green_val = ui->green_slider->value();
    compute.processMaster(master.img, master.tmp, master.exposure_val, master.red_val, master.green_val, master.blue_val, master.contrast_val);
    updateUi(master.tmp);

}

void MainWindow::on_blue_slider_valueChanged(){

    master.blue_val = ui->blue_slider->value();
    compute.processMaster(master.img, master.tmp, master.exposure_val, master.red_val, master.green_val, master.blue_val, master.contrast_val);
    updateUi(master.tmp);

}

void MainWindow::on_grayscale_btn_clicked(){

    compute.black_n_white(master.img, master.tmp);
    updateUi(master.tmp);
    master.img = master.tmp.clone();
}

void MainWindow::on_rotate_slider_valueChanged(){

    distort.rotate(master.img, master.tmp, ui->rotate_slider->value());
    updateUi(master.tmp);
}

void MainWindow::on_flipV_btn_clicked(){

    distort.flipV(master.img, master.tmp);
    updateUi(master.tmp);
    master.img = master.tmp.clone();
}

void MainWindow::on_flipH_btn_clicked()
{
    distort.flipH(master.img, master.tmp);
    updateUi(master.tmp);
    master.img = master.tmp.clone();
}

void MainWindow::on_hue_slider_valueChanged(){

    master.hue = ui->hue_slider->value();
    compute.processHLS(master.img, master.tmp, master.hue, master.luminance, master.saturation);
    updateUi(master.tmp);
}

void MainWindow::on_saturation_slider_valueChanged(){

    master.saturation = ui->saturation_slider->value();
    compute.processHLS(master.img, master.tmp, master.hue, master.luminance, master.saturation);
    updateUi(master.tmp);
}

void MainWindow::on_luminance_slider_valueChanged(){

    master.luminance = ui->luminance_slider->value();
    compute.processHLS(master.img, master.tmp, master.hue, master.luminance, master.saturation);
    updateUi(master.tmp);
}

void MainWindow::on_hsl_btn_clicked(){

    master.img = master.tmp.clone();

    ui->red_slider->setValue(0);
    ui->red_slider->setEnabled(false);
    ui->red_spin->setEnabled(false);
    ui->green_slider->setValue(0);
    ui->green_slider->setEnabled(false);
    ui->green_spin->setEnabled(false);
    ui->blue_slider->setValue(0);
    ui->blue_slider->setEnabled(false);
    ui->blue_spin->setEnabled(false);

    ui->exposure_slider->setValue(0);
    ui->exposure_slider->setEnabled(false);
    ui->exposure_spin->setEnabled(false);

    ui->contrast_slider->setValue(0);
    ui->contrast_slider->setEnabled(false);
    ui->contrast_spin->setEnabled(false);

    ui->exposure_slider->setValue(0);
    ui->exposure_slider->setEnabled(false);
    ui->exposure_spin->setEnabled(false);

    ui->hue_slider->setEnabled(true);
    ui->hue_spin->setEnabled(true);
    ui->saturation_slider->setEnabled(true);
    ui->saturation_spin->setEnabled(true);
    ui->luminance_slider->setEnabled(true);
    ui->luminance_spin->setEnabled(true);
    ui->ok_btn->setEnabled(true);
    ui->hsl_btn->setEnabled(false);
}

void MainWindow::on_ok_btn_clicked(){

    master.img = master.tmp.clone();

    ui->hue_slider->setValue(0);
    ui->saturation_slider->setValue(0);
    ui->luminance_slider->setValue(0);
    ui->hue_slider->setEnabled(false);
    ui->hue_spin->setEnabled(false);
    ui->saturation_slider->setEnabled(false);
    ui->saturation_spin->setEnabled(false);
    ui->luminance_slider->setEnabled(false);
    ui->luminance_spin->setEnabled(false);
    ui->ok_btn->setEnabled(false);
    ui->hsl_btn->setEnabled(true);

    ui->red_slider->setEnabled(true);
    ui->red_spin->setEnabled(true);

    ui->green_slider->setEnabled(true);
    ui->green_spin->setEnabled(true);

    ui->blue_slider->setEnabled(true);
    ui->blue_spin->setEnabled(true);

    ui->exposure_slider->setEnabled(true);
    ui->exposure_spin->setEnabled(true);

    ui->contrast_slider->setEnabled(true);
    ui->contrast_spin->setEnabled(true);
}
