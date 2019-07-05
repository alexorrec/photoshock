#include "flip.h"

flip::flip(cv::Mat& src, cv::Mat& dst, bool h) : process (src, dst), is_Horiented(h){
}

void flip::doProcess(){

    if(is_Horiented){
        for (int i = 0; i < src.rows; i++)
            for (int j = 0; j < src.cols; j++) {
                int x = -i + src.rows;
                dst.at<cv::Vec3b>(i,j) = src.at<cv::Vec3b>(x,j);
            }
    }else {
        for (int i = 0; i < src.rows; i++)
            for (int j = 0; j < src.cols; j++) {
                int y = -j + src.cols;
                dst.at<cv::Vec3b>(i,j) = src.at<cv::Vec3b>(i,y);
            }
    }
}
