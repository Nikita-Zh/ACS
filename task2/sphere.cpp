#include "sphere.h"
#include <cmath>

void sphere::Input(FILE *input) {
    fscanf(input, "%d", &radius);
    fscanf(input, "%lf", &density);
}

double sphere::Square() {
    return 2 * M_PI * radius * radius;
}

void sphere::Output(FILE *output) {
//    fprintf(output ,"%s%d%s%f%s"
//            ,"This is a Sphere with radius "
//            , radius
//            , " and square "
//            , Square()
//            , "\n");
    fprintf(output ,"%s%d%s%f%s%f%s"
            ,"Sphere with radius "
            , radius
            , "; density "
            , density
            , "; square "
            , Square()
            , "\n");
}
