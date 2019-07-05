#ifndef BLUR_H
#define BLUR_H

#include "kernels.h"

class Blur : Kernels
{
public:
    Blur(cv::Mat& src, cv::Mat& dst);

    void applyKernel() override;

private:
    const int Blur_Mat[3][3] = {
        {1, 2, 1} ,
        {2, 4, 2} ,
        {1, 2, 1}
        };

};

#endif // BLUR_H
