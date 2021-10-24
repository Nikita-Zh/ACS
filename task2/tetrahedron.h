#ifndef TASK2_TETRAHEDRON_H
#define TASK2_TETRAHEDRON_H

#include "shape.h"
#include <cstdio>

class tetrahedron : public shape {
private:
    int x;

public:
    double Square() override;

    void Input(FILE *input) override;

    void Output(FILE *output) override;
};

#endif //TASK2_TETRAHEDRON_H
