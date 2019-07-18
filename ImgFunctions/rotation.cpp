#include "rotation.h"
#include <iostream>
rotation::rotation(cv::Mat& src, cv::Mat& dst, int a) : Process(src, dst), angle(a){
}

void rotation::doProcess(){

    float rads = angle*3.1415926/180.0;
    float _cos = cos(-rads);
    float _sin = sin(-rads);
    float xcenter = (float)(src.cols)/2.0;
    float ycenter = (float)(src.rows)/2.0;

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++){

            int x = ycenter + ((float)(i)-ycenter)*_cos - ((float)(j)-xcenter)*_sin;
            int y = xcenter + ((float)(i)-ycenter)*_sin + ((float)(j)-xcenter)*_cos;
            if (x >= 0 && x < src.rows && y >= 0 && y < src.cols) {
                     dst.at<cv::Vec4b>(i ,j) = src.at<cv::Vec4b>(x, y);
                  }
            else {
                dst.at<cv::Vec4b>(i ,j)[3] = 0;
            }
        }

}
