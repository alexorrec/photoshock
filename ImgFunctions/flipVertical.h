#ifndef FLIPVERTICAL_H
#define FLIPVERTICAL_H

#include "process.h"

class flipVertical : Process
{
public:
    flipVertical(cv::Mat& src, cv::Mat& dst);

    virtual void doProcess() override;
};

#endif // FLIPVERTICAL_H
