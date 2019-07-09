#ifndef SHARP_H
#define SHARP_H

#include "kernels.h"

class Sharp : Kernels
{
public:
    Sharp(cv::Mat& src, cv::Mat& dst);

    virtual void applyKernel() override;

private:
    const int Sharp_Mat[3][3] = {
        {0, -1, 0} ,
        {-1, 5, -1} ,
        {0, -1, 0}
    };
};

#endif // SHARP_H
