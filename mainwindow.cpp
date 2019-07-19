#include "mainwindow.h"
#include <QFileDialog>
#include <QGraphicsScene>

MainWindow::MainWindow(Model* m, Controller* c, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow),  model(m), controller(c){
    ui->setupUi(this);
    model->addObserver(this);
}

MainWindow::~MainWindow(){
    delete ui;
    model->removeObserver(this);
}

void MainWindow::closeEvent(QCloseEvent*  /*event*/){

    if(ui->img_view->isEnabled())
    {
    switch (QMessageBox(tr("Warning!"), tr("Save before Exit?"), QMessageBox::Warning, QMessageBox::Yes |
                        QMessageBox::Default, QMessageBox::No, QMessageBox::Escape).exec()){
        case 3:
            ui->save_btn->clicked();
        }
    }
}

void MainWindow::on_zoom_in_btn_clicked(){
    is_Scaling = true;
    value = 1.25;
    updateUi();
    is_Scaling = false;
}

void MainWindow::on_zoom_out_btn_clicked(){
    is_Scaling = true;
    value = 0.8;
    updateUi();
    is_Scaling = false;
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

    scene->clear();
    scene->addPixmap(QPixmap::fromImage(qimg).scaled(ui->img_view->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->img_view->setScene(scene);
    ui->img_view->show();
    if(is_Scaling)
        ui->img_view->scale(value, value);

    if(controller->caretaker->listMementoRedo.empty())
        ui->redo_btn->setEnabled(false);
    else
        ui->redo_btn->setEnabled(true);

    if(controller->caretaker->listMementoUndo.back() == nullptr)
        ui->undo_btn->setEnabled(false);
    else
        ui->undo_btn->setEnabled(true);
}

void MainWindow::on_open_btn_clicked(){

    QString path = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"), "", QObject::tr(".JPG (*.jpg , *.jpeg) ;; .PNG (*.png) ;; .TIFF (*.tiff , *.tif)"));

    if(!path.isEmpty()){

        controller->load(path);

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

        ui->blur_btn->setEnabled(true);
        ui->sharp_btn->setEnabled(true);
        ui->sepia_btn->setEnabled(true);
        ui->grayscale_btn->setEnabled(true);

        ui->rotate_slider->setEnabled(true);
        ui->rotate_spin->setEnabled(true);
        ui->flipH_btn->setEnabled(true);
        ui->flipV_btn->setEnabled(true);

        ui->steps_spin->setEnabled(true);

        ui->zoom_in_btn->setEnabled(true);
        ui->zoom_out_btn->setEnabled(true);

        ui->img_view->setEnabled(true);
    }
}

void MainWindow::on_save_btn_clicked(){

    QString path = QFileDialog::getSaveFileName(this, QObject::tr("Save File"), "", QObject::tr(".JPG (*.jpg) ;; .PNG (*.png) ;; .TIFF (*.tif)"));

    if(!path.isEmpty())
        controller->save(path);
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
    controller->flip_V();
}

void MainWindow::on_flipH_btn_clicked(){
    controller->flip_H();
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

    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
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

    ui->tabWidget->setTabEnabled(1, true);
    ui->tabWidget->setTabEnabled(2, true);

}

void MainWindow::on_grayscale_btn_clicked(){
    controller->grayscale();
}

void MainWindow::on_sepia_btn_clicked(){
    controller->sepia();
}

void MainWindow::on_blur_btn_clicked(){
    for(int k = 0; k < ui->steps_spin->value(); k++)
        controller->gaussian_blur();
}

void MainWindow::on_sharp_btn_clicked(){
    for(int k = 0; k < ui->steps_spin->value(); k++)
        controller->sharpener();
}

void MainWindow::on_undo_btn_clicked()
{
    controller->un_re_Doing = true;

    controller->originator->restoreToMemento(controller->caretaker->getMementoUndo());

    ui->exposure_slider->setValue(controller->originator->getValue(controller->originator->exposure_Val));
    ui->contrast_slider->setValue(controller->originator->getValue(controller->originator->contrast_Val));
    ui->red_slider->setValue(controller->originator->getValue(controller->originator->red_Val));
    ui->green_slider->setValue(controller->originator->getValue(controller->originator->green_Val));
    ui->blue_slider->setValue(controller->originator->getValue(controller->originator->blue_Val));

    ui->hue_slider->setValue(controller->originator->getValue(controller->originator->hue_Val));
    ui->saturation_slider->setValue(controller->originator->getValue(controller->originator->saturation_Val));
    ui->luminance_slider->setValue(controller->originator->getValue(controller->originator->luminance_Val));

    ui->rotate_slider->setValue(controller->originator->getValue(controller->originator->angle_Val));

    controller->revertMat(controller->originator->prev);
    controller->un_re_Doing = false;
}

void MainWindow::on_redo_btn_clicked()
{
    controller->un_re_Doing = true;

    controller->originator->restoreToMemento(controller->caretaker->getMementoRedo());

    ui->exposure_slider->setValue(controller->originator->getValue(controller->originator->exposure_Val));
    ui->contrast_slider->setValue(controller->originator->getValue(controller->originator->contrast_Val));
    ui->red_slider->setValue(controller->originator->getValue(controller->originator->red_Val));
    ui->green_slider->setValue(controller->originator->getValue(controller->originator->green_Val));
    ui->blue_slider->setValue(controller->originator->getValue(controller->originator->blue_Val));

    ui->hue_slider->setValue(controller->originator->getValue(controller->originator->hue_Val));
    ui->saturation_slider->setValue(controller->originator->getValue(controller->originator->saturation_Val));
    ui->luminance_slider->setValue(controller->originator->getValue(controller->originator->luminance_Val));

    ui->rotate_slider->setValue(controller->originator->getValue(controller->originator->angle_Val));

    controller->revertMat(controller->originator->prev);
    controller->un_re_Doing = false;
}

void MainWindow::on_reset_btn_clicked(){
    ui->exposure_spin->setValue(0);
    ui->contrast_spin->setValue(0);
    ui->red_spin->setValue(0);
    ui->green_spin->setValue(0);
    ui->blue_spin->setValue(0);

    ui->rotate_spin->setValue(0);

    controller->caretaker->listMementoRedo.clear();
    controller->revertMat(model->primary);
}
