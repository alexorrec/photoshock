#ifndef HSL_PROCESS_H
#define HSL_PROCESS_H

#include "process.h"

class HSL_process : Process
{
public:
    HSL_process(cv::Mat& src, cv::Mat& dst, int h = 0, int s = 0, int l = 0);

    void doProcess() override;

private:
    int hue;
    int saturation;
    int luminance;
};

#endif // HSL_PROCESS_H
