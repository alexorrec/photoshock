#include "controller.h"

void Controller::rgb(int exp, double cont, int r, int g, int b){

    RGB_process run(model->src, model->dst, exp, cont, r, g, b);
    run.doProcess();
    model->setValue(exp, model->exposure_Val);
    model->setValue(cont, model->contrast_Val);
    model->setValue(r, model->red_Val);
    model->setValue(g, model->green_Val);
    model->setValue(b, model->blue_Val);
}

void Controller::hsl(int h, int s, int l){

    HSL_process run(model->src, model->dst, h, s, l);
    run.doProcess();
    model->setValue(h, model->hue);
    model->setValue(s, model->saturation);
    model->setValue(l, model->luminance);
}

void Controller::rotate(int a){
    rotation run(model->src, model->dst, a);
    run.doProcess();
    model->setValue(a, model->angle);
}

void Controller::mirror(std::string orientation){

    flip run(model->src, model->dst, orientation);
    run.doProcess();
    model->src = model->dst.clone();
    model->setString(orientation, model->orientation);
}

void Controller::sepia_Bw(std::string choice){

    Matrix_Filters run(model->src, model->dst, choice);
    run.doProcess();
    model->setString(choice, model->filter);
}

void Controller::gaussian_blur(){

    Blur run(model->src, model->dst);
    run.applyKernel();
    model->src = model->dst.clone();
    model->notify();
}

void Controller::sharpener(){

    Sharp run(model->src, model->dst);
    run.applyKernel();
    model->src = model->dst.clone();
    model->notify();
}
