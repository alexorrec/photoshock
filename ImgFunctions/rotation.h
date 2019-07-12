#ifndef ROTATION_H
#define ROTATION_H

#include "process.h"

class rotation : Process
{
public:
    rotation(cv::Mat& src, cv::Mat& dst, int a = 0);

    virtual void doProcess() override;

protected:
    int angle;
};

#endif // ROTATION_H
