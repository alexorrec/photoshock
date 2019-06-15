#include "imgdistortions.h"
#include <math.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

ImgDistortions::ImgDistortions()
{

}

void ImgDistortions::rotate(cv::Mat& img, cv::Mat& tmp, int angle){

    float rads = angle*3.1415926/180.0;
    float cs = cos(-rads);
    float ss = sin(-rads);

    float xcenter = (float)(img.cols)/2.0;
    float ycenter = (float)(img.rows)/2.0;

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++){

            int rorig = ycenter + ((float)(i)-ycenter)*cs - ((float)(j)-xcenter)*ss;
            int corig = xcenter + ((float)(i)-ycenter)*ss + ((float)(j)-xcenter)*cs;
            if (rorig >= 0 && rorig < img.rows && corig >= 0 && corig < img.cols) {
                     tmp.at<cv::Vec3b>(i ,j) = img.at<cv::Vec3b>(rorig, corig);
                  }else tmp.at<cv::Vec3b>(i ,j) = 0;
        }

}

void ImgDistortions::flipV(cv::Mat &img, cv::Mat &tmp){
    for (int i = 0; i < img.rows; i++)
        for (int j = 0; j < img.cols; j++) {
            int y = -j + img.cols;
            tmp.at<cv::Vec3b>(i,j) = img.at<cv::Vec3b>(i,y);
        }
}

void ImgDistortions::flipH(cv::Mat& img, cv::Mat& tmp){
    for (int i = 0; i < img.rows; i++)
        for (int j = 0; j < img.cols; j++) {
            int x = -i + img.rows;
            tmp.at<cv::Vec3b>(i,j) = img.at<cv::Vec3b>(x,j);
        }
}
