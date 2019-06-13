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

    void processMaster(cv::Mat& img, cv::Mat& tmp, int brightness, int red, int green, int blue, float contrast);
    void saturation(cv::Mat& img, cv::Mat& tmp, int value);
    void black_n_white(cv::Mat& img);
};

#endif // IMGPROCESSING_H
