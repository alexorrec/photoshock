#ifndef PROCESS_H
#define PROCESS_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

class Process{
public:
    Process(cv::Mat& s, cv::Mat& d) : src(s), dst(d){}
    virtual ~Process()= default;

    virtual void doProcess() = 0;

protected:
    cv::Mat src;
    cv::Mat dst;
};

#endif // PROCESS_H
