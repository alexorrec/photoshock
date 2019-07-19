#include "blur.h"
#include <iostream>

Blur::Blur(cv::Mat& src, cv::Mat& dst) : Kernels (src, dst){
}

void Blur::applyKernel(){

    double sum;
        for(int i = 1; i < src.rows - 1; i++){
            for(int j = 1; j < src.cols - 1; j++)
                for (int k = 0; k < 3; k ++) {
                sum = 0.0;
                dst.at<cv::Vec4b>(i,j)[k] = 0.0;
                for(int x = -1; x <= 1; x++){
                    for(int y = -1; y <= 1; y++){
                        sum += (Blur_Mat[y+1][x+1]*src.at<cv::Vec4b>(i - x, j - y)[k]);
                    }
                }
                dst.at<cv::Vec4b>(i,j)[k] = cv::saturate_cast<uchar>(sum);
            }
        }
}
