#include "fliphorizontal.h"

flipHorizontal::flipHorizontal(cv::Mat& src, cv::Mat& dst) : Process (src, dst){
}

void flipHorizontal::doProcess(){

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++){
            int x = -i + src.rows;
            dst.at<cv::Vec3b>(i,j) = src.at<cv::Vec3b>(x,j);
        }
}
