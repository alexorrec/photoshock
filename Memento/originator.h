#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include <iostream>
class Memento;

class Originator
{
public:
    Originator(const int exp = 0, const double c = 0,
               const int r = 0, const int g = 0, const int b = 0,
               const int h = 0, const int s = 0, const int l = 0, const int a = 0,
               const bool fV = false, const bool fH = false, const bool rot = false,
               const bool blur = false, const bool sharp = false,
               const bool gray = false, const bool sep = false);


    ~Originator();

    void setValue(const int v, int& value);
    void setValue(const double v, double& value);

    int getValue(int& value) const { return value; }
    double getValue(double& value) const { return value; }

    void setState(const bool s, bool& state);
    bool getState(bool& state) const { return state; }

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
};

#endif // ORIGINATOR_H
