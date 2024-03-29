#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

#include "model.h"
#include "controller.h"
#include "observer.h"
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public Observer
{
    Q_OBJECT

public:
    MainWindow(Model* m, Controller* c, QWidget *parent = nullptr);
    ~MainWindow() override;

    void updateUi() override;

private slots:

    void on_open_btn_clicked();
    void on_save_btn_clicked();

    void on_exposure_slider_valueChanged();
    void on_contrast_slider_valueChanged();

    void on_red_slider_valueChanged();
    void on_green_slider_valueChanged();
    void on_blue_slider_valueChanged();

    void on_rotate_slider_valueChanged();
    void on_flipV_btn_clicked();
    void on_flipH_btn_clicked();

    void on_hue_slider_valueChanged();
    void on_saturation_slider_valueChanged();
    void on_luminance_slider_valueChanged();

    void on_hsl_btn_clicked();
    void on_ok_btn_clicked();

    void on_grayscale_btn_clicked();
    void on_sepia_btn_clicked();

    void on_blur_btn_clicked();
    void on_sharp_btn_clicked();

    void on_undo_btn_clicked();
    void on_redo_btn_clicked();

    void on_reset_btn_clicked();
    void on_tabWidget_currentChanged(){ model->src = model->dst.clone(); }

    void closeEvent(QCloseEvent* event) override;

    void on_zoom_in_btn_clicked();
    void on_zoom_out_btn_clicked();

private:
    QGraphicsScene* scene = new QGraphicsScene();
    Ui::MainWindow *ui;

    double value = 1.0;
    bool is_Scaling = false;

    Model* model;
    Controller* controller;
};



#endif // MAINWINDOW_H
