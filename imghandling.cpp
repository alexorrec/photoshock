#include "imghandling.h"
#include <iostream>
#include <QImage>
#include <QString>
#include <QFileDialog>
#include <iostream>
#include <QWidget>
#include <QObject>
#include <QMessageBox>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

ImgHandling::ImgHandling()= default;

void ImgHandling::imgLoad(cv::Mat& img, cv::Mat& tmp, cv::Mat& original, QString& path){

    const std::string imagePath(path.toStdString());

    img = cv::imread(imagePath);
    cvtColor(img, img, CV_BGR2RGB);
    tmp = img.clone();
    original = img.clone();
}

void ImgHandling::imgSave(QString& path, cv::Mat& img){

    QImage qimg((const uchar*) img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
    qimg.bits();

    if(!qimg.isNull())
        qimg.save(path);
    else
        QMessageBox::critical(nullptr, "Errore","Impossibile salvare il file");
}

void ImgHandling::calculateHist(cv::Mat& img, cv::Mat& hist_Mat, int color){

    int k = 0, r = 255, g = 255, b = 255;
    switch (color)
    {
        case 0:
             k = 0; r = 255; g = 0; b = 0;
        break;

        case 1:
             k = 1; r = 0; g = 255; b = 0;
        break;

        case 2:
            k = 2; r = 0; g = 0; b = 255;
        break;
    }

    int hist[256];
    for(int i = 0; i < 255; i++)
        hist[i] = 0;

    //Calcolo hist
    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            hist[(int)img.at<cv::Vec3b>(i,j)[k]]++;

    int hist_w = 299;
    int hist_h = 69;
    int bin_w = cvRound((double) hist_w/256);

    cv::Mat histImage(hist_h, hist_w, CV_8UC3, cv::Scalar(50, 50, 50));

    int max = hist[0];

    for(int i = 1; i < 256; i++)
        if(max < hist[i])
            max = hist[i];

    for(int i = 0; i < 255; i++)
            hist[i] = ((double)hist[i]/max)*histImage.rows;

    for(int i = 0; i < 255; i++)
        line(histImage, cv::Point(bin_w*(i), hist_h), cv::Point(bin_w*(i), hist_h - hist[i]), cv::Scalar(r,g,b), 1, 8, 0);

    hist_Mat = histImage.clone();
}
