#include "originator.h"
#include "memento.h"

Originator::Originator(const int exp, const double c,
                       const int r, const int g, const int b,
                       const int h, const int s, const int l, const int a,
                       const bool fV, const bool fH, const bool rot,
                       const bool blur, const bool sharp,
                       const bool gray, const bool sep)
    : exposure_Val(exp), contrast_Val(c), red_Val(r), green_Val(g), blue_Val(b), hue_Val(h), saturation_Val(s), luminance_Val(l), angle_Val(a),
      is_Flipped_V(fV), is_Flipped_H(fH), is_Rotated(rot), is_Blurred(blur), is_Sharpened(sharp), is_Grayscale(gray), is_Sepia(sep){
}

Originator::~Originator() = default;

void Originator::setState(const bool s, bool& state){
    state = s;
}

void Originator::setValue(const int v, int &value){
    value = v;
}

void Originator::setValue(const double v, double &value){
    value = v;
}

Memento* Originator::createMemento(){
    return new Memento(*this);
}

void Originator::restoreToMemento(Memento* memento){
    *this = memento->getOriginator();
}

void Originator::setMat(const cv::Mat& actual){
    prev = actual.clone();
}
