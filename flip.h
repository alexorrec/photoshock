#ifndef FLIP_H
#define FLIP_H

#include "process.h"

class flip : process
{
public:
    flip(cv::Mat& src, cv::Mat& dst, bool h = false);

    void doProcess() override;

private:
    bool is_Horiented; //false = verticale, true orizzontale
};

#endif // FLIP_H
