#include "flipVertical.h"

flipVertical::flipVertical(cv::Mat& src, cv::Mat& dst) : process (src, dst){
}

void flipVertical::doProcess(){

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++){
            int y = -j + src.cols;
            dst.at<cv::Vec3b>(i,j) = src.at<cv::Vec3b>(i,y);
        }
}
