#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QLabel>
#include <QPixmap>
#include <QMessageBox>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "ui_mainwindow.h"
#include "imghandling.h"
#include "imgprocessing.h"

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
    void on_HSL_btn_clicked();


    void on_geometry_btn_clicked();

private:
    Ui::MainWindow *ui;

    ImgHandling handling;
    ImgProcessing compute;
    QMessageBox message;
};



#endif // MAINWINDOW_H
