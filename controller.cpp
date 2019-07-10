#include "controller.h"

void Controller::load(QString path){
    model->imgLoad(path);
    model->setFlag(true, model->is_Loaded);
}

void Controller::save(QString path){
    model->imgSave(path);
    model->setFlag(true, model->is_Saved);
}

void Controller::rgb(int exp, double cont, int r, int g, int b){

    RGB_process run(model->src, model->dst, exp, cont, r, g, b);
    run.doProcess();
    model->setValue(exp, cont, r, g, b);
}

void Controller::hsl(int h, int s, int l){

    HSL_process run(model->src, model->dst, h, s, l);
    run.doProcess();
    model->setValue(h, s, l);
}

void Controller::rotate(int a){
    rotation run(model->src, model->dst, a);
    run.doProcess();
    model->setValue(a);
}

void Controller::flip_V(){

    flipVertical run(model->src, model->dst);
    run.doProcess();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Flipped_V);
}

void Controller::flip_H(){

    flipHorizontal run(model->src, model->dst);
    run.doProcess();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Flipped_H);
}

void Controller::sepia(){

    Sepia run(model->src, model->dst);
    run.doProcess();
    model->setFlag(true, model->is_Sepia);
}

void Controller::grayscale(){

    Grayscale run(model->src, model->dst);
    run.doProcess();
    model->setFlag(true, model->is_Grayscale);
}

void Controller::gaussian_blur(){

    Blur run(model->src, model->dst);
    run.applyKernel();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Blurred);
}

void Controller::sharpener(){

    Sharp run(model->src, model->dst);
    run.applyKernel();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Sharpened);
}
