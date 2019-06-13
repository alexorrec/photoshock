#ifndef IMGHANDLING_H
#define IMGHANDLING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <QString>
#include <iostream>
#include <QImage>

class ImgHandling
{
public:
    ImgHandling();

    cv::Mat img;
    cv::Mat tmp;

    int exposure_val = 0;
    int red_val = 0;
    int green_val = 0;
    int blue_val = 0;
    float contrast_val = 0;

    void imgLoad(QString& path);
    void imgSave();
    void emptySheet();
};

#endif // IMGHANDLING_H
