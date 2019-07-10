#ifndef MATRIX_FILTERS_H
#define MATRIX_FILTERS_H

#include "process.h"

class Sepia : process
{
public:
    Sepia(cv::Mat& src, cv::Mat& dst);

    virtual void doProcess() override;

private:

    const double sepia_Mat[3][3] = {
        {0.393, 0.769, 0.189} ,
        {0.349, 0.686, 0.168} ,
        {0.272, 0.534, 0.131}
        };
};

#endif // MATRIX_FILTERS_H
