#include "mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::updateUi(cv::Mat img){

    cv::Mat hist_r = handling.calculateHist(img, 0);
    cv::Mat hist_g = handling.calculateHist(img, 1);
    cv::Mat hist_b = handling.calculateHist(img, 2);

    QImage qHr = handling.Mat2Qimg(hist_r);
    QImage qHg = handling.Mat2Qimg(hist_g);
    QImage qHb = handling.Mat2Qimg(hist_b);

    QImage qimg = handling.Mat2Qimg(img);

    ui->r_hist->setPixmap(QPixmap::fromImage(qHr).scaled(ui->r_hist->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->g_hist->setPixmap(QPixmap::fromImage(qHg).scaled(ui->g_hist->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->b_hist->setPixmap(QPixmap::fromImage(qHb).scaled(ui->b_hist->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    ui->img_lbl->setPixmap(QPixmap::fromImage(qimg).scaled(ui->img_lbl->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void MainWindow::on_open_btn_clicked(){

    QString path = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    if(!path.isEmpty()){

        handling.imgLoad(path);

        updateUi(handling.src);

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
        ui->save_btn->setEnabled(true);

    }
}

void MainWindow::on_save_btn_clicked(){

    QString path = QFileDialog::getSaveFileName(this, QObject::tr("Save File"), "", QObject::tr(".JPG (*.jpg) ;; .PNG (*.png) ;; .TIFF (*.tif)"));

    if(!path.isEmpty())
        handling.imgSave(path);
}

void MainWindow::on_exposure_slider_valueChanged(){

    RGB_process m (handling.src, handling.dst, ui->exposure_slider->value(), ui->contrast_slider->value(),
                   ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());

    m.doProcess();
    updateUi(handling.dst);

}

void MainWindow::on_contrast_slider_valueChanged(){

    RGB_process m (handling.src, handling.dst, ui->exposure_slider->value(), ui->contrast_slider->value(),
                   ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());

    m.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_red_slider_valueChanged(){

    RGB_process m (handling.src, handling.dst, ui->exposure_slider->value(), ui->contrast_slider->value(),
                   ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());

    m.doProcess();
    updateUi(handling.dst);

}

void MainWindow::on_green_slider_valueChanged(){

    RGB_process m (handling.src, handling.dst, ui->exposure_slider->value(), ui->contrast_slider->value(),
                   ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());

    m.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_blue_slider_valueChanged(){

    RGB_process m (handling.src, handling.dst, ui->exposure_slider->value(), ui->contrast_slider->value(),
                   ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());

    m.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_rotate_slider_valueChanged(){

    rotation m(handling.src, handling.dst, ui->rotate_slider->value());
    m.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_flipV_btn_clicked(){

    flip m(handling.src, handling.dst, true);
    m.doProcess();
    updateUi(handling.dst);
    handling.src = handling.dst.clone();
}

void MainWindow::on_flipH_btn_clicked()
{
    flip m(handling.src, handling.dst, false);
    m.doProcess();
    updateUi(handling.dst);

    handling.src = handling.dst.clone();
}

void MainWindow::on_hue_slider_valueChanged(){

    HSL_process process(handling.src, handling.dst, ui->hue_slider->value(), ui->saturation_slider->value(), ui->luminance_slider->value());
    process.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_saturation_slider_valueChanged(){

    HSL_process process(handling.src, handling.dst, ui->hue_slider->value(), ui->saturation_slider->value(), ui->luminance_slider->value());
    process.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_luminance_slider_valueChanged(){

    HSL_process process(handling.src, handling.dst, ui->hue_slider->value(), ui->saturation_slider->value(), ui->luminance_slider->value());
    process.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_hsl_btn_clicked(){

    handling.src = handling.dst.clone();

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

    handling.src = handling.dst.clone();

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

void MainWindow::on_black_and_white_clicked(){

    Matrix_Filters bw(handling.src, handling.dst, "BW");
    bw.doProcess();
    updateUi(handling.dst);
}

void MainWindow::on_sepia_btn_clicked(){

    Matrix_Filters sepia(handling.src, handling.dst, "SEPIA");
    sepia.doProcess();
    updateUi(handling.dst);
}
