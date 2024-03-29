#ifndef IMGHANDLING_H
#define IMGHANDLING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include <QImage>


class ImgHandling
{
public:
    ImgHandling();

    cv::Mat calculateHist(cv::Mat img, int channel);
    QImage Mat2Qimg(cv::Mat img);

    void imgLoad(const QString& path);
    void imgSave(const QString& path);

    cv::Mat src;
    cv::Mat dst;
    cv::Mat primary;
};

#endif // IMGHANDLING_H
