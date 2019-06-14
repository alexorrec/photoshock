#include "imgprocessing.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <math.h>

ImgProcessing::ImgProcessing()
{

}

void ImgProcessing::processMaster(cv::Mat& img, cv::Mat& tmp, int brightness, int red, int green, int blue, double contrast){

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++){
                if(k == 0)  //_R
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>((img.at<cv::Vec3b>(i,j)[k] + brightness + red )*(259 * (contrast + 255) / (255 * (259 - contrast))));
                if(k == 1)  //_G
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>((img.at<cv::Vec3b>(i,j)[k] + brightness + green )*(259 * (contrast + 255) / (255 * (259 - contrast))));
                if(k == 2)  //_B
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>((img.at<cv::Vec3b>(i,j)[k] + brightness + blue )*(259 * (contrast + 255) / (255 * (259 - contrast))));
            }            
}

void ImgProcessing::black_n_white(cv::Mat& img){

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++)
                for(int m = 0; m < 3; m++)
                    img.at<cv::Vec3b>(i,j)[k] += ((img.at<cv::Vec3b>(i,j)[m])/3);

}

void ImgProcessing::processHLS(cv::Mat &img, cv::Mat &tmp, int hue, int luminance, int saturation){

    //cv::cvtColor(img, img, CV_RGB2HSV);
    //cv::cvtColor(tmp, tmp, CV_RGB2HSV);

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++){
                if(k == 0)  //_H
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[k] + hue);
                if(k == 1)  //_L
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[k] + saturation);
                if(k == 2)  //_S
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[k] + luminance);
            }

    //cv::cvtColor(img, img, CV_HSV2RGB);
    //cv::cvtColor(tmp, tmp, CV_HSV2RGB);
}

void ImgProcessing::rotate(cv::Mat &img, cv::Mat &tmp, int angle){

    float rads = angle*3.1415926/180.0;
    float cs = cos(-rads);
    float ss = sin(-rads);

    float xcenter = (float)(img.cols)/2.0;
    float ycenter = (float)(img.rows)/2.0;

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++){

            int rorig = ycenter + ((float)(i)-ycenter)*cs - ((float)(j)-xcenter)*ss;
            int corig = xcenter + ((float)(i)-ycenter)*ss + ((float)(j)-xcenter)*cs;
            int pixel = 0;
            if (rorig >= 0 && rorig < img.rows && corig >= 0 && corig < img.cols) {
                     tmp.at<cv::Vec3b>(i ,j) = img.at<cv::Vec3b>(rorig, corig);
                  }else tmp.at<cv::Vec3b>(i ,j) = 0;
        }

}
