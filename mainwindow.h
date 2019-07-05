#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
//#include "masterph.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include "process.h"
#include "imghandling.h"
#include "rgb_process.h"
#include "hsl_process.h"
#include "matrix_filters.h"
#include "flip.h"
#include "rotation.h"
#include "blur.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

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

    void on_black_and_white_clicked();
    void on_sepia_btn_clicked();

    void on_tabWidget_currentChanged(){ handling.src = handling.dst.clone(); }

private:

    void updateUi(cv::Mat img);

    Ui::MainWindow *ui;
    ImgHandling handling;
};



#endif // MAINWINDOW_H
