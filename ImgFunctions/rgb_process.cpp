#include "rgb_process.h"

RGB_process::RGB_process(cv::Mat& src, cv::Mat& dst, int exp, double c, int r, int g, int b)
    : Process (src, dst), exposure_Val(exp), contrast_Val(c), red_Val(r), green_Val(g), blue_Val(b){
}

void RGB_process::doProcess(){

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++){
            dst.at<cv::Vec3b>(i,j)[0] = cv::saturate_cast<uchar>((src.at<cv::Vec3b>(i,j)[0] + exposure_Val + red_Val )*(259 * (contrast_Val + 255) / (255 * (259 - contrast_Val))));
            dst.at<cv::Vec3b>(i,j)[1] = cv::saturate_cast<uchar>((src.at<cv::Vec3b>(i,j)[1] + exposure_Val + green_Val )*(259 * (contrast_Val + 255) / (255 * (259 - contrast_Val))));
            dst.at<cv::Vec3b>(i,j)[2] = cv::saturate_cast<uchar>((src.at<cv::Vec3b>(i,j)[2] + exposure_Val + blue_Val )*(259 * (contrast_Val + 255) / (255 * (259 - contrast_Val))));
        }
}
