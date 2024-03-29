#ifndef KERNELS_H
#define KERNELS_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

class Kernels{
public:
    Kernels(cv::Mat& s, cv::Mat& d) : src(s), dst(d){}
    virtual ~Kernels() = default;

    virtual void applyKernel() = 0;

protected:
    cv::Mat src;
    cv::Mat dst;
};

#endif // KERNELS_H
