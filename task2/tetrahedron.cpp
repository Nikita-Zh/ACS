#include "tetrahedron.h"
#include <cmath>

void tetrahedron::Input(FILE *input) {
    fscanf(input, "%d", &x);
    fscanf(input, "%lf", &density);
}

void tetrahedron::Output(FILE *output) {
    fprintf(output ,"%s %d %s %f %s %f %s"
            ,"Tetrahedron with edge "
            , x
            , "; density "
            , density
            , "; square "
            , Square()
            , "\n");
}

double tetrahedron::Square() {
    return x * x * pow(3, 0.5);
}
