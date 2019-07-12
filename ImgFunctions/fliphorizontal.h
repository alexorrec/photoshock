#ifndef FLIPHORIZONTAL_H
#define FLIPHORIZONTAL_H

#include "process.h"

class flipHorizontal : Process
{
public:
    flipHorizontal(cv::Mat& src, cv::Mat& dst);

    virtual void doProcess() override;
};

#endif // FLIPHORIZONTAL_H
