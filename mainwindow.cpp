#include "mainwindow.h"
#include <QFileDialog>
#include "blur.h"

MainWindow::MainWindow(Model* m, Controller* c, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow),  model(m), controller(c){
    ui->setupUi(this);
    model->addObserver(this);
}

MainWindow::~MainWindow(){
    delete ui;
    model->removeObserver(this);
}

void MainWindow::updateUi(){

    cv::Mat hist_r = model->calculateHist(model->dst, 0);
    cv::Mat hist_g = model->calculateHist(model->dst, 1);
    cv::Mat hist_b = model->calculateHist(model->dst, 2);

    QImage qHr = model->Mat2Qimg(hist_r);
    QImage qHg = model->Mat2Qimg(hist_g);
    QImage qHb = model->Mat2Qimg(hist_b);

    QImage qimg = model->Mat2Qimg(model->dst);

    ui->r_hist->setPixmap(QPixmap::fromImage(qHr).scaled(ui->r_hist->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->g_hist->setPixmap(QPixmap::fromImage(qHg).scaled(ui->g_hist->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->b_hist->setPixmap(QPixmap::fromImage(qHb).scaled(ui->b_hist->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    ui->img_lbl->setPixmap(QPixmap::fromImage(qimg).scaled(ui->img_lbl->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void MainWindow::on_open_btn_clicked(){

    QString path = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    if(!path.isEmpty()){

        model->imgLoad(path);

        updateUi();

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
        model->imgSave(path);
}

void MainWindow::on_exposure_slider_valueChanged(){

    controller->rgb(ui->exposure_slider->value(), ui->contrast_slider->value(),
                    ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());
}

void MainWindow::on_contrast_slider_valueChanged(){

    controller->rgb(ui->exposure_slider->value(), ui->contrast_slider->value(),
                    ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());
}

void MainWindow::on_red_slider_valueChanged(){

    controller->rgb(ui->exposure_slider->value(), ui->contrast_slider->value(),
                    ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());

}

void MainWindow::on_green_slider_valueChanged(){

    controller->rgb(ui->exposure_slider->value(), ui->contrast_slider->value(),
                    ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());
}

void MainWindow::on_blue_slider_valueChanged(){

    controller->rgb(ui->exposure_slider->value(), ui->contrast_slider->value(),
                    ui->red_slider->value(), ui->green_slider->value(), ui->blue_slider->value());
}

void MainWindow::on_rotate_slider_valueChanged(){
    controller->rotate(ui->rotate_slider->value());
}

void MainWindow::on_flipV_btn_clicked(){
    controller->mirror("VERTICAL");
}

void MainWindow::on_flipH_btn_clicked(){
    controller->mirror("HORIZONTAL");
}

void MainWindow::on_hue_slider_valueChanged(){

    controller->hsl(ui->hue_slider->value(), ui->saturation_slider->value(), ui->luminance_slider->value());
}

void MainWindow::on_saturation_slider_valueChanged(){

    controller->hsl(ui->hue_slider->value(), ui->saturation_slider->value(), ui->luminance_slider->value());
}

void MainWindow::on_luminance_slider_valueChanged(){

    controller->hsl(ui->hue_slider->value(), ui->saturation_slider->value(), ui->luminance_slider->value());
}

void MainWindow::on_hsl_btn_clicked(){

    model->src = model->dst.clone();

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

    model->src = model->dst.clone();

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
    controller->sepia_Bw("BW");
}

void MainWindow::on_sepia_btn_clicked(){
    controller->sepia_Bw("SEPIA");
}

void MainWindow::on_blur_btn_clicked(){
    controller->gaussian_blur();
}

void MainWindow::on_sharp_btn_clicked(){
    controller->sharpener();
}
