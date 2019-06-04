#include "imgprocessing.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

ImgProcessing::ImgProcessing()
{

}

void ImgProcessing::black_n_white(cv::Mat& img){

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++)
                for(int m = 0; m < 3; m++)
                    img.at<cv::Vec3b>(i,j)[k] += ((img.at<cv::Vec3b>(i,j)[m])/3);

}

void ImgProcessing::brightness(cv::Mat& img, int value){

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++)
                img.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[k] + value);

}

void ImgProcessing::gain_red(cv::Mat &img, int value){

    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            img.at<cv::Vec3b>(i,j)[0] = cv::saturate_cast<uchar>(img.at<cv::Vec3b>(i,j)[0] + value);

}

void ImgProcessing::contrast(cv::Mat& img, int value){

    //non corretto
    for(int i = 0; i < img.rows; i++)
        for(int j = 0; j < img.cols; j++)
            for(int k = 0; k < 3; k++)
                img.at<cv::Vec3b>(i,j)[k] = cv::saturate_cast<uchar>(value*img.at<cv::Vec3b>(i,j)[k]);

}
