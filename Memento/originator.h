#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

class Memento;

class Originator
{
public:
    Originator(int exp = 0, double c = 0,
               int r = 0, int g = 0, int b = 0,
               int h = 0, int s = 0, int l = 0, int a = 0,
               bool fV = false, bool fH = false, bool rot = false,
               bool blur = false, bool sharp = false,
               bool gray = false, bool sep = false);


    ~Originator();

    void setValue(int v, int& value);
    void setValue(double v, double& value);

    int getValue(int& value) const { return value; }
    double getValue(double& value) const { return value; }

    void setState(bool s, bool& state);
    bool getState(bool& state) const { return state; }

    cv::Mat getMat() const { return prev; }
    void setMat(cv::Mat actual);

    Memento* createMemento();
    void restoreToMemento(Memento* memento);

public:
    bool is_Flipped_V;
    bool is_Flipped_H;
    bool is_Rotated;
    bool is_Blurred;
    bool is_Sharpened;
    bool is_Grayscale;
    bool is_Sepia;

    int exposure_Val;
    double contrast_Val;
    int red_Val;
    int green_Val;
    int blue_Val;

    int hue_Val;
    int saturation_Val;
    int luminance_Val;

    int angle_Val;

    cv::Mat prev;
};

#endif // ORIGINATOR_H
