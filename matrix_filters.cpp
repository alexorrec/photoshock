#include "matrix_filters.h"

Matrix_Filters::Matrix_Filters(cv::Mat& src, cv::Mat& dst, std::string c)
    : process (src, dst), choice(c) {
}

void Matrix_Filters::doProcess(){

    if(choice == "BW")
        for(int i = 0; i < src.rows; i++)
            for(int j = 0; j < src.cols; j++)
                for(int k = 0; k < 3; k++){
                    dst.at<cv::Vec3b>(i,j)[k] = 0;
                    for (int m = 0; m < 3; m++)
                        dst.at<cv::Vec3b>(i,j)[k] += (bw_Mat[k][m]*(src.at<cv::Vec3b>(i,j)[m]));
                }

    if(choice == "SEPIA")
        for(int i = 0; i < src.rows; i++)
            for(int j = 0; j < src.cols; j++)
                for(int k = 0; k < 3; k++){
                    dst.at<cv::Vec3b>(i,j)[k] = 0;
                    for (int m = 0; m < 3; m++)
                        dst.at<cv::Vec3b>(i,j)[k] += (sepia_Mat[k][m]*(src.at<cv::Vec3b>(i,j)[m]));
                }
}
