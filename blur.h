#ifndef BLUR_H
#define BLUR_H

#include "kernels.h"

class Blur : Kernels
{
public:
    Blur(cv::Mat& src, cv::Mat& dst);

    virtual void applyKernel() override;

private:
    const double Blur_Mat[3][3] = {
        {0.0625, 0.125, 0.0625} ,
        {0.125, 0.25, 0.125} ,
        {0.0625, 0.125, 0.0625}
        };
};

#endif // BLUR_H
