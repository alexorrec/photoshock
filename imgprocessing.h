#ifndef IMGPROCESSING_H
#define IMGPROCESSING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>


class ImgProcessing
{
public:
    ImgProcessing();

    void brightness(cv::Mat& img, int value);
    void gain_red(cv::Mat& img, int value);
    void gain_green(cv::Mat& img, int value);
    void gain_blue(cv::Mat& img, int value);
    void contrast(cv::Mat& img, int value);
    void saturation(cv::Mat& img, int value);
    void black_n_white(cv::Mat& img);
};

#endif // IMGPROCESSING_H
