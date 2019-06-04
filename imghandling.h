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

    int old_brightness = 0;
    int old_red = 0;

    void imgLoad(QString& path);
    void imgSave();
    void emptySheet();
    void storeValueB(int value);
    void storeValueR(int value);
};

#endif // IMGHANDLING_H
