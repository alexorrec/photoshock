#include "hsl_process.h"

HSL_process::HSL_process(cv::Mat& src, cv::Mat& dst, int h, int s, int l)
    : Process(src, dst), hue(h), saturation(s), luminance(l){
}

void HSL_process::doProcess(){

    cv::Mat hslIN = src.clone();
    cv::Mat hslOUT;
    cv::cvtColor(hslIN, hslIN, CV_RGBA2RGB);

    cv::cvtColor(hslIN, hslIN, CV_RGB2HLS);
    cv::cvtColor(hslIN, hslOUT, CV_RGB2HLS);

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++){
            hslOUT.at<cv::Vec3b>(i,j)[0] = cv::saturate_cast<uchar>(hslIN.at<cv::Vec3b>(i,j)[0] + hue);
            hslOUT.at<cv::Vec3b>(i,j)[1] = cv::saturate_cast<uchar>(hslIN.at<cv::Vec3b>(i,j)[1] + luminance);
            hslOUT.at<cv::Vec3b>(i,j)[2] = cv::saturate_cast<uchar>(hslIN.at<cv::Vec3b>(i,j)[2] + saturation);
        }

    cv::cvtColor(hslOUT, hslOUT, CV_HLS2RGB);
    cv::cvtColor(hslOUT, dst, CV_RGB2RGBA);
}
