#ifndef FLIP_H
#define FLIP_H

#include "process.h"

class flip : process
{
public:
    flip(cv::Mat& src, cv::Mat& dst, std::string o = "HORIZONTAL");

    virtual void doProcess() override;

private:
    std::string orientation;
};

#endif // FLIP_H
