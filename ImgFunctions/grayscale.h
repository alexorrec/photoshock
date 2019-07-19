#ifndef GRAYSCALE_H
#define GRAYSCALE_H

#include "process.h"

class Grayscale : Process
{
public:
    Grayscale(cv::Mat& src, cv::Mat& dst);

    void doProcess() override;

private:
    const double bw_Mat[3][3] = {
        {0.2126, 0.7152, 0.0722} ,
        {0.2126, 0.7152, 0.0722} ,
        {0.2126, 0.7152, 0.0722}
        };
};

#endif // GRAYSCALE_H
