#ifndef IMGPROCESSING_H
#define IMGPROCESSING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>



class ImgProcessing
{
public:
    ImgProcessing();

    void processMaster(cv::Mat& img, cv::Mat& tmp, int brightness, int red, int green, int blue, double contrast);
    void processHLS(cv::Mat& img, cv::Mat& tmp, int hue, int luminance, int saturation); //Ancora non funziona : Errore sulla conversione in HSL
    void black_n_white(cv::Mat& img); //Da controllare

    void rotate(cv::Mat& img, cv::Mat& tmp, int angle);
    void flipH(cv::Mat& img, cv::Mat& tmp);
    void flipV(cv::Mat& img, cv::Mat& tmp);

};

#endif // IMGPROCESSING_H
