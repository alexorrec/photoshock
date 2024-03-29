#include "model.h"

Model::Model(){
     exposure_Val = 0;
     contrast_Val = 0;
     red_Val = 0;
     green_Val = 0;
     blue_Val = 0;
     hue_Val = 0;
     saturation_Val = 0;
     luminance_Val = 0;
     angle_Val = 0;

}

void Model::notify() {
    for (Observer* observer : observers)
        observer->updateUi();
}

void Model::addObserver(Observer* o) {
    observers.push_back(o);
}

void Model::removeObserver(Observer* o) {
    observers.remove(o);
}

void Model::setValue(int a){
    angle_Val = a;
    notify();
}

void Model::setValue(int e, double c, int r, int g, int b){

    exposure_Val = e;
    contrast_Val = c;
    red_Val = r;
    green_Val = g;
    blue_Val = b;

    notify();
}

void Model::setValue(int h, int s, int l){
    hue_Val = h;
    saturation_Val = s;
    luminance_Val = l;

    notify();
}

void Model::setFlag(bool flag, bool &X){
    X = flag;
    notify();
}
