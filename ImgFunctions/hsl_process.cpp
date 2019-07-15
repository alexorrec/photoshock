#include "hsl_process.h"

HSL_process::HSL_process(cv::Mat& src, cv::Mat& dst, int h, int s, int l)
    : Process(src, dst), hue(h), saturation(s), luminance(l){
}

void HSL_process::doProcess(){
    cv::cvtColor(src, src, CV_RGB2HLS);
    cv::cvtColor(dst, dst, CV_RGB2HLS);

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++){
            dst.at<cv::Vec3b>(i,j)[0] = cv::saturate_cast<uchar>(src.at<cv::Vec3b>(i,j)[0] + hue);
            dst.at<cv::Vec3b>(i,j)[1] = cv::saturate_cast<uchar>(src.at<cv::Vec3b>(i,j)[1] + luminance);
            dst.at<cv::Vec3b>(i,j)[2] = cv::saturate_cast<uchar>(src.at<cv::Vec3b>(i,j)[2] + saturation);
        }

    cv::cvtColor(src, src, CV_HLS2RGB);
    cv::cvtColor(dst, dst, CV_HLS2RGB);
}
