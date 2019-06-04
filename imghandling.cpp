#include "imghandling.h"
#include <iostream>
#include <QImage>
#include <QString>
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>
#include <QWidget>
#include <QObject>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

ImgHandling::ImgHandling(){

}

void ImgHandling::imgLoad(QString& path){

    const std::string imagePath(path.toStdString());

    img = cv::imread(imagePath);

    cvtColor(img, img, CV_BGR2RGB);
}

void ImgHandling::storeValueB(int value){
    ImgHandling::old_brightness = value;
}

void ImgHandling::storeValueR(int value){
    ImgHandling::old_red = value;
}
