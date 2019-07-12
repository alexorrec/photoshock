#include "rgb_process.h"

RGB_process::RGB_process(cv::Mat& src, cv::Mat& dst, int exp, double c, int r, int g, int b)
    : Process (src, dst), exposure_Val(exp), contrast_Val(c), red_Val(r), green_Val(g), blue_Val(b){
}

void RGB_process::doProcess(){

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++)
            for(int k = 0; k < 3; k++){
                if(k == 0)  //_R
                    dst.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>((src.at<cv::Vec3b>(i,j)[k] + exposure_Val + red_Val )*(259 * (contrast_Val + 255) / (255 * (259 - contrast_Val))));
                if(k == 1)  //_G
                    dst.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>((src.at<cv::Vec3b>(i,j)[k] + exposure_Val + green_Val )*(259 * (contrast_Val + 255) / (255 * (259 - contrast_Val))));
                if(k == 2)  //_B
                    dst.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>((src.at<cv::Vec3b>(i,j)[k] + exposure_Val + blue_Val )*(259 * (contrast_Val + 255) / (255 * (259 - contrast_Val))));
            }
}
