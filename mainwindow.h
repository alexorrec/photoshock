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

private slots:
    void on_open_btn_clicked();

    void on_contrast_slider_actionTriggered(int action);

    void on_exposure_slider_actionTriggered(int action);

    void on_grayscale_btn_clicked();

    void on_red_slider_actionTriggered(int action);

private:
    Ui::MainWindow *ui;


    ImgHandling input;

    ImgProcessing compute;

};



#endif // MAINWINDOW_H
