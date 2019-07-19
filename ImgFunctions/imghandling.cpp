#include "imghandling.h"
#include <QMessageBox>

ImgHandling::ImgHandling() = default;

void ImgHandling::imgLoad(const QString& path){

    const std::string imagePath(path.toStdString());

    src = cv::imread(imagePath);
    cvtColor(src, src, CV_BGR2RGBA);
    dst = src.clone();
    primary = src.clone();
}

void ImgHandling::imgSave(const QString& path){

    QImage qimg = Mat2Qimg(dst);

    if(!qimg.isNull())
        qimg.save(path);
    else
        QMessageBox::critical(nullptr, "Errore","Impossibile salvare il file");
}

cv::Mat ImgHandling::calculateHist(cv::Mat img, int channel){

    int k = 0, r = 255, g = 255, b = 255;
    switch (channel)
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

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++){
            if(img.at<cv::Vec4b>(i,j)[3] != 0)
                hist[(int)img.at<cv::Vec4b>(i,j)[k]]++;
        }

    int hist_w = 299;
    int hist_h = 69;
    int bin_w = cvRound((double) hist_w/256);

    cv::Mat histImage(hist_h, hist_w, CV_8UC4, cv::Scalar(50, 50, 50, 255));

    int max = hist[0];

    for(int i = 1; i < 256; i++)
        if(max < hist[i])
            max = hist[i];

    for(int i = 0; i < 255; i++)
            hist[i] = ((double)hist[i]/max)*histImage.rows;

    for(int i = 0; i < 255; i++)
        line(histImage, cv::Point(bin_w*(i), hist_h), cv::Point(bin_w*(i), hist_h - hist[i]), cv::Scalar(r,g,b, 255), 1, 8, 0);

    return histImage;
}

QImage ImgHandling::Mat2Qimg(cv::Mat img){

    QImage qimg((const uchar*) img.data, img.cols, img.rows, img.step, QImage::Format_RGBA8888);
    qimg.bits();

    return qimg;
}
