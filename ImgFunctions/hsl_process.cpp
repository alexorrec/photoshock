#include "hsl_process.h"

HSL_process::HSL_process(cv::Mat& src, cv::Mat& dst, int h, int s, int l)
    : Process(src, dst), hue(h), saturation(s), luminance(l){
}

void HSL_process::doProcess(){
    cv::cvtColor(src, src, CV_RGB2HLS);
    cv::cvtColor(dst, dst, CV_RGB2HLS);

    for(int i = 0; i < src.rows; i++)
        for(int j = 0; j < src.cols; j++)
            for(int k = 0; k < 3; k++){
                if(k == 0)  //_H
                    dst.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(src.at<cv::Vec3b>(i,j)[k] + hue);
                if(k == 1)  //_L
                    dst.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(src.at<cv::Vec3b>(i,j)[k] + luminance);
                if(k == 2)  //_S
                    dst.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(src.at<cv::Vec3b>(i,j)[k] + saturation);
            }

    cv::cvtColor(src, src, CV_HLS2RGB);
    cv::cvtColor(dst, dst, CV_HLS2RGB);
}
