#include "imgprocessing.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

ImgProcessing::ImgProcessing()
{

}

void ImgProcessing::processMaster(cv::Mat& img, cv::Mat& tmp, int brightness, int red, int green, int blue, float contrast){

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

void ImgProcessing::saturation(cv::Mat &img, cv::Mat &tmp, int value){

    cv::cvtColor(img, tmp, CV_RGB2HSV);

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            tmp.at<cv::Vec3b>(i,j)[1] = tmp.at<cv::Vec3b>(i,j)[1] + 0,5;

    cv::cvtColor(tmp, img, CV_HSV2RGB);
}

