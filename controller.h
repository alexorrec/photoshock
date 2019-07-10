#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"

#include "rgb_process.h"
#include "hsl_process.h"
#include "rotation.h"
#include "flipVertical.h"
#include "fliphorizontal.h"
#include "sepia.h"
#include "blur.h"
#include "sharp.h"
#include "grayscale.h"


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
};

#endif // CONTROLLER_H
