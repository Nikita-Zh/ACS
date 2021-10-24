#ifndef TASK2_SPHERE_H
#define TASK2_SPHERE_H

#include "shape.h"
#include <cstdio>

class sphere : public shape {
private:
    int radius;

public:
    double Square() override;

    void Input(FILE *input) override;

    void Output(FILE *output) override;
};

#endif //TASK2_SPHERE_H
