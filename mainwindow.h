#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QLabel>
#include <QPixmap>
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "masterph.h"
#include "imghandling.h"
#include "imgprocessing.h"
#include "imgdistortions.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



    void updateUi(cv::Mat& img);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_open_btn_clicked();
    void on_save_btn_clicked();
    void on_reset_btn_clicked();

    void on_exposure_slider_valueChanged();
    void on_contrast_slider_valueChanged();

    void on_red_slider_valueChanged();
    void on_green_slider_valueChanged();
    void on_blue_slider_valueChanged();

    void on_grayscale_btn_clicked();

    void on_rotate_slider_valueChanged();
    void on_flipV_btn_clicked();
    void on_flipH_btn_clicked();

    void on_hue_slider_valueChanged();
    void on_saturation_slider_valueChanged();
    void on_luminance_slider_valueChanged();

    void on_hsl_btn_clicked();


    void on_ok_btn_clicked();

private:

    Ui::MainWindow *ui;
    MasterPH master;
    ImgHandling handling;
    ImgProcessing compute;
    ImgDistortions distort;
    QMessageBox message;
};



#endif // MAINWINDOW_H
