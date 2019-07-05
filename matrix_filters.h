#ifndef MATRIX_FILTERS_H
#define MATRIX_FILTERS_H

#include "process.h"

class Matrix_Filters : process
{
public:
    Matrix_Filters(cv::Mat& src, cv::Mat& dst, std::string c = "BW");

    void doProcess() override;

private:

    std::string choice;

    const double sepia_Mat[3][3] = {
        {0.393, 0.769, 0.189} ,
        {0.349, 0.686, 0.168} ,
        {0.272, 0.534, 0.131}
        };

    const double bw_Mat[3][3] = {
        {0.2126, 0.7152, 0.0722} ,
        {0.2126, 0.7152, 0.0722} ,
        {0.2126, 0.7152, 0.0722}
        };
};

#endif // MATRIX_FILTERS_H
