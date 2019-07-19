#include "rotation.h"
#include <iostream>
#include <opencv2/opencv.hpp>

rotation::rotation(cv::Mat& src, cv::Mat& dst, int a, int d) : Process(src, dst), angle(a), diagonal(d){
}

void rotation::doProcess(){

    cv::Mat container = cv::Mat::zeros(diagonal, diagonal, src.type());

    int offsetX = (diagonal - src.cols) / 2;
    int offsetY = (diagonal - src.rows) / 2;

    src.copyTo(container.rowRange(offsetY, offsetY + src.rows).colRange(offsetX, offsetX + src.cols));

    float rads = angle*3.1415926/180.0;
    float _cos = cos(-rads);
    float _sin = sin(-rads);
    float xcenter = (float)(container.cols)/2.0;
    float ycenter = (float)(container.rows)/2.0;

    for(int i = 0; i < container.rows; i++)
        for(int j = 0; j < container.cols; j++){

            int x = ycenter + ((float)(i)-ycenter)*_cos - ((float)(j)-xcenter)*_sin;
            int y = xcenter + ((float)(i)-ycenter)*_sin + ((float)(j)-xcenter)*_cos;

            if (x >= 0 && x < container.rows && y >= 0 && y < container.cols)
                    dst.at<cv::Vec4b>(i,j) = container.at<cv::Vec4b>(x, y);
            else
                dst.at<cv::Vec4b>(i,j)[3] = 0;
        }
}
