#ifndef TASK2_SHAPE_H
#define TASK2_SHAPE_H

#include <cstdio>

class shape {
public:
    shape();

    virtual double Square();

    shape *GetShape(FILE *input);

    virtual void Input(FILE *input);

    virtual void Output(FILE *input);

protected:
    double density;
};

#endif //TASK2_SHAPE_H
