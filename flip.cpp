#include "flip.h"

flip::flip(cv::Mat& src, cv::Mat& dst, std::string o) : process (src, dst), orientation(o){
}

void flip::doProcess(){

    if(orientation == "HORIZONTAL")
        for (int i = 0; i < src.rows; i++)
            for (int j = 0; j < src.cols; j++) {
                int x = -i + src.rows;
                dst.at<cv::Vec3b>(i,j) = src.at<cv::Vec3b>(x,j);
            }

    if(orientation == "VERTICAL")
        for (int i = 0; i < src.rows; i++)
            for (int j = 0; j < src.cols; j++) {
                int y = -j + src.cols;
                dst.at<cv::Vec3b>(i,j) = src.at<cv::Vec3b>(i,y);
            }
}
