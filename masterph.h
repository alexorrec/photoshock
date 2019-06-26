#ifndef MASTERPH_H
#define MASTERPH_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include "imghandling.h"
#include "imgprocessing.h"

class MasterPH
{
public:
    cv::Mat img;
    cv::Mat tmp;
    cv::Mat original;

    cv::Mat hist_Mat_r;
    cv::Mat hist_Mat_g;
    cv::Mat hist_Mat_b;

    int exposure_val = 0;
    int red_val = 0;
    int green_val = 0;
    int blue_val = 0;
    double contrast_val = 0;

    int hue = 0;
    int luminance = 0;
    int saturation = 0;
};

#endif // MASTERPH_H
