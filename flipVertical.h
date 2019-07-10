#ifndef FLIPVERTICAL_H
#define FLIPVERTICAL_H

#include "process.h"

class flipVertical : process
{
public:
    flipVertical(cv::Mat& src, cv::Mat& dst);

    virtual void doProcess() override;
};

#endif // FLIPVERTICAL_H
