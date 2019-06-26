#ifndef IMGHANDLING_H
#define IMGHANDLING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <QString>
#include <iostream>

class ImgHandling
{
public:
    ImgHandling();

    void imgLoad(cv::Mat& img, cv::Mat& tmp, cv::Mat& original, QString& path);
    void imgSave(QString& path, cv::Mat& img);

    void calculateHist(cv::Mat& img, cv::Mat& hist_Mat, int color);
};

#endif // IMGHANDLING_H
