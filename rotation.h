#ifndef ROTATION_H
#define ROTATION_H

#include "process.h"

class rotation : process
{
public:
    rotation(cv::Mat& src, cv::Mat& dst, int a = 0);

    void doProcess() override;

protected:
    int angle;
};

#endif // ROTATION_H
