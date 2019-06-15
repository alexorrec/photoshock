#ifndef IMGDISTORTIONS_H
#define IMGDISTORTIONS_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>


class ImgDistortions
{
public:
    ImgDistortions();

    void rotate(cv::Mat& img, cv::Mat& tmp, int angle);
    void flipH(cv::Mat& img, cv::Mat& tmp);
    void flipV(cv::Mat& img, cv::Mat& tmp);


};

#endif // IMGDISTORTIONS_H
