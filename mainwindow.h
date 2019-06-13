#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QLabel>
#include <QPixmap>
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

    void on_contrast_slider_actionTriggered();

    void on_exposure_slider_actionTriggered();

    void on_grayscale_btn_clicked();

    void on_red_slider_actionTriggered();

    void on_green_slider_actionTriggered();

    void on_blue_slider_actionTriggered();

    void on_reset_brn_clicked();

    void on_saturation_slider_actionTriggered();

private:
    Ui::MainWindow *ui;


    ImgHandling input;

    ImgProcessing compute;

};



#endif // MAINWINDOW_H
