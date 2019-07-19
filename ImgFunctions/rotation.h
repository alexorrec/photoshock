#ifndef ROTATION_H
#define ROTATION_H

#include "process.h"

class rotation : Process
{
public:
    rotation(cv::Mat& src, cv::Mat& dst, int a = 0, int d = 0);

    void doProcess() override;

protected:
    int angle;
    int diagonal;
};

#endif // ROTATION_H
