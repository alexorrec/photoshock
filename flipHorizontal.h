#ifndef FLIPHORIZONTAL_H
#define FLIPHORIZONTAL_H

#include "process.h"

class flipHorizontal : process
{
public:
    flipHorizontal(cv::Mat& src, cv::Mat& dst);

    virtual void doProcess() override;
};

#endif // FLIPHORIZONTAL_H
