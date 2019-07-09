#ifndef RGB_PROCESS_H
#define RGB_PROCESS_H

#include "process.h"
#include <iostream>


class RGB_process : process
{
public:
    RGB_process(cv::Mat& src, cv::Mat& dst, int exp = 0, double c = 1, int r = 0, int g = 0, int b = 0);

    virtual void doProcess() override;

private:
    int exposure_Val;
    double contrast_Val;
    int red_Val;
    int green_Val;
    int blue_Val;
};

#endif // RGB_PROCESS_H
