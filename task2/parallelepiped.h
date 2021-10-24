#ifndef TASK2_PARALLELEPIPED_H
#define TASK2_PARALLELEPIPED_H

#include <cstdio>
#include "shape.h"

class parallelepiped : public shape {
private:
    int x, y, z;

public:
    double Square() override;

    void Input(FILE *input) override;

    void Output(FILE *output) override;
};

#endif //TASK2_PARALLELEPIPED_H
