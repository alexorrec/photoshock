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
    void processHLS(cv::Mat& img, cv::Mat& tmp, int hue, int luminance, int saturation); //Errore sul passaggio della Mat
    void black_n_white(cv::Mat& img, cv::Mat& tmp);
};

#endif // IMGPROCESSING_H
