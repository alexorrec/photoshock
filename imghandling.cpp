#include "imghandling.h"
#include <iostream>
#include <QImage>
#include <QString>
#include <QFileDialog>
#include <iostream>
#include <QWidget>
#include <QObject>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

ImgHandling::ImgHandling(){

}

void ImgHandling::imgLoad(QString& path){

    const std::string imagePath(path.toStdString());

    img = cv::imread(imagePath);
    tmp = cv::Mat::zeros(img.rows, img.cols, img.type()); //matrice di 0, dimensioni di img

    tmp = img.clone();
    cvtColor(img, img, CV_BGR2RGB);
    cvtColor(tmp, tmp, CV_BGR2RGB);
}

void ImgHandling::imgSave(QString& path, cv::Mat& img){

    const std::string imagePath(path.toStdString());

    //cvSaveImage(imagePath, tmp, 0);

    QImage qimg((const uchar*) img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
    qimg.bits();

    qimg.save(path);


}
