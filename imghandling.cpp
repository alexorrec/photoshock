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

    tmp = cv::Mat::zeros(img.rows, img.cols, img.type()); //matrice di 0, dimensioni di img

    cvtColor(img, img, CV_BGR2RGB);
}
