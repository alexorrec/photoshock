#ifndef MODEL_H
#define MODEL_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include "subject.h"
#include <list>
#include <iostream>
#include "ImgFunctions/imghandling.h"


class Model : public Subject, public ImgHandling
{
public:
    Model();

    void setValue(int a);
    void setValue(int e, double c, int r, int g, int b);
    void setValue(int h, int s, int l);
    void setFlag(bool flag, bool& X);

    virtual void addObserver(Observer* o) override;
    virtual void removeObserver(Observer* o) override;
    virtual void notify() override;

    std::list<Observer*> observers;

    bool is_Flipped_V = false;
    bool is_Flipped_H = false;
    bool is_Rotated = false;
    bool is_Blurred = false;
    bool is_Sharpened = false;
    bool is_Grayscale = false;
    bool is_Sepia = false;
    bool is_Loaded = false;
    bool is_Saved = false;

private:
    int exposure_Val;
    double contrast_Val;
    int red_Val;
    int green_Val;
    int blue_Val;

    int hue_Val;
    int saturation_Val;
    int luminance_Val;

    int angle_Val;
};

#endif // MODEL_H
