#include "grayscale.h"

Grayscale::Grayscale(cv::Mat& src, cv::Mat& dst) : Process (src, dst){
}

void Grayscale::doProcess(){

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++)
            for(int k = 0; k < 3; k++){
                dst.at<cv::Vec4b>(i,j)[k] = 0;
                for (int m = 0; m < 3; m++)
                    dst.at<cv::Vec4b>(i,j)[k] += bw_Mat[k][m]*src.at<cv::Vec4b>(i,j)[m];
            }
}
