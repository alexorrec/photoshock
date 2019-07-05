#ifndef PROCESS_H
#define PROCESS_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

class process{    
public:
    process(cv::Mat& src, cv::Mat& dst);
    virtual ~process();

    virtual void doProcess() = 0;

protected:
    cv::Mat src;
    cv::Mat dst;
};

#endif // PROCESS_H
