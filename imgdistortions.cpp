#include "imgdistortions.h"
#include <cmath>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

ImgDistortions::ImgDistortions()
= default;

void ImgDistortions::rotate(cv::Mat& img, cv::Mat& tmp, int angle){

    float rads = angle*3.1415926/180.0;
    float _cos = cos(-rads);
    float _sin = sin(-rads);
    float xcenter = (float)(img.cols)/2.0;
    float ycenter = (float)(img.rows)/2.0;

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++){

            int x = ycenter + ((float)(i)-ycenter)*_cos - ((float)(j)-xcenter)*_sin;
            int y = xcenter + ((float)(i)-ycenter)*_sin + ((float)(j)-xcenter)*_cos;
            if (x >= 0 && x < img.rows && y >= 0 && y < img.cols) {
                     tmp.at<cv::Vec3b>(i ,j) = img.at<cv::Vec3b>(x, y);
                  }
            else
                tmp.at<cv::Vec3b>(i ,j) = 128;
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
