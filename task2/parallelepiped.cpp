#include "parallelepiped.h"

void parallelepiped::Input(FILE *input) {
    fscanf(input, "%d%d%d", &x, &y, &z);
    fscanf(input, "%lf", &density);
}

double parallelepiped::Square() {
    return 2 * (x * y + y * z + z * x);
}

void parallelepiped::Output(FILE *output) {
    fprintf(output ,"%s %d %s %d %s %d %s %f %s %f %s"
            ,"Parallelepiped with edges: "
            , x
            ,", "
            , y
            ,", "
            , z
            , "; density "
            , density
            , "; square "
            , Square()
            , "\n");
}
