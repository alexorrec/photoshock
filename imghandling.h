#ifndef IMGHANDLING_H
#define IMGHANDLING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include <QString>
#include <QImage>


class ImgHandling
{
public:
    ImgHandling();

    cv::Mat calculateHist(cv::Mat img, int channel);
    QImage Mat2Qimg(cv::Mat img);

    void imgLoad(QString path);
    void imgSave(QString path);

    cv::Mat src;
    cv::Mat dst;
};

#endif // IMGHANDLING_H
