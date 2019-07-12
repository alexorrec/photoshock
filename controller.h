#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"

#include "ImgFunctions/rgb_process.h"
#include "ImgFunctions/hsl_process.h"
#include "ImgFunctions/rotation.h"
#include "ImgFunctions/flipVertical.h"
#include "ImgFunctions/fliphorizontal.h"
#include "ImgFunctions/sepia.h"
#include "ImgFunctions/blur.h"
#include "ImgFunctions/sharp.h"
#include "ImgFunctions/grayscale.h"
#include "Memento/caretaker.h"
#include "Memento/originator.h"


class Controller
{
public:
    explicit Controller(Model* m) : model(m) {}

    void load(QString path);
    void save(QString path);
    void rgb(int exp, double cont, int r, int g, int b);
    void hsl(int h, int s, int l);
    void rotate(int a);
    void flip_V();
    void flip_H();
    void sepia();
    void grayscale();

    void gaussian_blur();
    void sharpener();

private:
    Model* model;
public:
    Originator* originator = new Originator();
    CareTaker* caretaker = new CareTaker();
    bool un_re_Doing = false;
};

#endif // CONTROLLER_H
