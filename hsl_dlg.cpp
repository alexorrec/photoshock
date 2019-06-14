#include "hsl_dlg.h"
#include "ui_hsl_dlg.h"
#include "imghandling.h"
#include "imgprocessing.h"
#include "mainwindow.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

HSL_dlg::HSL_dlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HSL_dlg)
{
    ui->setupUi(this);
}

HSL_dlg::~HSL_dlg()
{
    delete ui;
}

void HSL_dlg::on_hue_slider_actionTriggered(int action)
{
    cv::cvtColor(input.img, input.img, CV_RGB2HSV);
    cv::cvtColor(input.tmp, input.tmp, CV_RGB2HSV);

    input.hue = ui->hue_slider->value();
    process.processHLS(input.img, input.tmp, 10, 10, 20);

    cv::cvtColor(input.img, input.img, CV_HSV2RGB);
    cv::cvtColor(input.tmp, input.tmp, CV_HSV2RGB);
    update.updateUi(input.tmp);
}
