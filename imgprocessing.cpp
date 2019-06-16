#include "imgprocessing.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <cmath>
#include <iostream>

ImgProcessing::ImgProcessing()
= default;

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

void ImgProcessing::black_n_white(cv::Mat& img, cv::Mat& tmp){

    double b_wMat[3][3] = {
        {0.2126, 0.7152, 0.0722} ,
        {0.2126, 0.7152, 0.0722} ,
        {0.2126, 0.7152, 0.0722}
        };

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++){
                tmp.at<cv::Vec3b>(i,j)[k] = 0;
                for (int m = 0; m < 3; m++)
                    tmp.at<cv::Vec3b>(i,j)[k] += (b_wMat[k][m]*(img.at<cv::Vec3b>(i,j)[m]));
            }
}

void ImgProcessing::sepia(cv::Mat &img, cv::Mat &tmp){

    double sepiaMat[3][3] = {
        {0.393, 0.769, 0.189} ,
        {0.349, 0.686, 0.168} ,
        {0.272, 0.534, 0.131}
        };

    double sepia_value = 0;

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++){

                 for (int m = 0; m < 3; m++)
                     sepia_value += sepiaMat[k][m]*(img.at<cv::Vec3b>(i,j)[m]);

                //if((int)sepia_value > 255)
                  //  tmp.at<cv::Vec3b>(i,j)[k] = 255;
                //else
                    tmp.at<cv::Vec3b>(i,j)[k] = (int)sepia_value;
            }




}

void ImgProcessing::processHLS(cv::Mat& img, cv::Mat& tmp, int hue, int luminance, int saturation){

    cv::cvtColor(img, img, CV_RGB2HLS);
    cv::cvtColor(tmp, tmp, CV_RGB2HLS);

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++){
                if(k == 0)  //_H
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[k] + hue);
                if(k == 1)  //_L
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[k] + luminance);
                if(k == 2)  //_S
                    tmp.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[k] + saturation);
            }

    cv::cvtColor(img, img, CV_HLS2RGB);
    cv::cvtColor(tmp, tmp, CV_HLS2RGB);
}
