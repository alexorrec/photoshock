#ifndef MODEL_H
#define MODEL_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include "subject.h"
#include <list>
#include <iostream>
#include "imghandling.h"


class Model : public Subject, public ImgHandling
{
public:
    Model();

    void setValue(int v, int& value);
    void setString(std::string s, std::string& string);
    void storeSignal();
    void undo(); //TODO

    virtual void addObserver(Observer* o) override;
    virtual void removeObserver(Observer* o) override;
    virtual void notify() override;

public:

    std::list<Observer*> observers;

    int exposure_Val = 0;
    int contrast_Val = 0;
    int red_Val = 0;
    int green_Val = 0;
    int blue_Val = 0;

    int hue = 0;
    int saturation = 0;
    int luminance = 0;

    int angle = 0;

    std::string orientation = "VERTICAL";
    std::string filter = "BW";
};

#endif // MODEL_H
