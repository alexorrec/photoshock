#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"

#include "rgb_process.h"
#include "hsl_process.h"
#include "rotation.h"
#include "flip.h"
#include "matrix_filters.h"
#include "blur.h"
#include "sharp.h"


class Controller
{
public:
    explicit Controller(Model* m) : model(m) {}

    void rgb(int exp, double cont, int r, int g, int b);
    void hsl(int h, int s, int l);
    void rotate(int a);
    void mirror(std::string orientation);
    void sepia_Bw(std::string choice);

    void gaussian_blur();
    void sharpener();


private:
    Model* model;
};

#endif // CONTROLLER_H
