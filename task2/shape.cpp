#include "shape.h"
#include "sphere.h"
#include "parallelepiped.h"
#include "tetrahedron.h"
#include <cstdio>
#include <cstdlib>

shape* shape::GetShape(FILE *input) {
    int shape_type;
    fscanf(input, "%d", &shape_type);
    shape* s;
    switch (shape_type) {
        case 1:
            s = new sphere();
            break;
        case 2:
            s = new parallelepiped();
            break;
        case 3:
            s = new tetrahedron();
            break;
        default:
            return nullptr;
    }
    s->Input(input);
    return s;
}

shape::shape() {

}

double shape::Square() {
    return 0;
}

void shape::Input(FILE *input) {

}

void shape::Output(FILE *input) {

}

