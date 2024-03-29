#include "controller.h"

#include <utility>

void Controller::load(QString path){
    model->imgLoad(path);
    model->setFlag(true, model->is_Loaded);

    originator->setValue(0, originator->exposure_Val);
    originator->setValue(0, originator->contrast_Val);
    originator->setValue(0, originator->red_Val);
    originator->setValue(0, originator->green_Val);
    originator->setValue(0, originator->blue_Val);
    originator->setMat(model->dst);
    caretaker->setMemento(originator->createMemento());
}

void Controller::save(QString path){
    model->imgSave(path);
    model->setFlag(true, model->is_Saved);
}

void Controller::rgb(int exp, double cont, int r, int g, int b){

    if(!un_re_Doing){
        caretaker->listMementoRedo.clear();
        originator->setValue(exp, originator->exposure_Val);
        originator->setValue(cont, originator->contrast_Val);
        originator->setValue(r, originator->red_Val);
        originator->setValue(g, originator->green_Val);
        originator->setValue(b, originator->blue_Val);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    RGB_process run(model->src, model->dst, exp, cont, r, g, b);
    run.doProcess();
    model->setValue(exp, cont, r, g, b);
}

void Controller::hsl(int h, int s, int l){

    if(!un_re_Doing){
        caretaker->listMementoRedo.clear();
        originator->setValue(h, originator->hue_Val);
        originator->setValue(s, originator->saturation_Val);
        originator->setValue(l, originator->luminance_Val);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    HSL_process run(model->src, model->dst, h, s, l);
    run.doProcess();
    model->setValue(h, s, l);
}

void Controller::rotate(int a){

    if(!un_re_Doing){
        originator->setState(true, originator->is_Rotated);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    int _diag = (int)sqrt(model->src.cols*model->src.cols+model->src.rows*model->src.rows);
    model->dst = cv::Mat::zeros(_diag, _diag, model->src.type());

    rotation run(model->src, model->dst, a, _diag);
    run.doProcess();
    model->setValue(a);
}

void Controller::flip_V(){

    if(!un_re_Doing){
        originator->setState(true, originator->is_Flipped_V);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    flipVertical run(model->src, model->dst);
    run.doProcess();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Flipped_V);
}

void Controller::flip_H(){

    if(!un_re_Doing){
        originator->setState(true, originator->is_Flipped_H);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    flipHorizontal run(model->src, model->dst);
    run.doProcess();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Flipped_H);
}

void Controller::sepia(){

    if(!un_re_Doing){
        originator->setState(true, originator->is_Sepia);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    Sepia run(model->src, model->dst);
    run.doProcess();
    model->setFlag(true, model->is_Sepia);
}

void Controller::grayscale(){

    if(!un_re_Doing){
        originator->setState(true, originator->is_Grayscale);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    Grayscale run(model->src, model->dst);
    run.doProcess();
    model->setFlag(true, model->is_Grayscale);
}

void Controller::gaussian_blur(){

    if(!un_re_Doing){
        originator->setState(true, originator->is_Blurred);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    Blur run(model->src, model->dst);
    run.applyKernel();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Blurred);
}

void Controller::sharpener(){

    if(!un_re_Doing){
        originator->setState(true, originator->is_Sharpened);
        originator->setMat(model->dst);
        caretaker->setMemento(originator->createMemento());
    }

    Sharp run(model->src, model->dst);
    run.applyKernel();
    model->src = model->dst.clone();
    model->setFlag(true, model->is_Sharpened);
}

void Controller::revertMat(cv::Mat img){

    model->src = img.clone();
    model->dst = model->src.clone();
    model->notify();
}


