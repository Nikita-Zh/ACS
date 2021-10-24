//------------------------------------------------------------------------------
//Variant number = 130
//Number of task = 4
//Number of function = 10
//------------------------------------------------------------------------------

#include <cstdio>
#include "chrono"
#include "container.h"

int main(int argc, char *argv[]) {
    auto start = std::chrono::high_resolution_clock::now();


    if (argc != 3) {
        printf("%s%d%s", "Incorrect number of arguments: expected 2, got ", argc, ".\n");
        return 1;
    }

    container cont;

    auto fileRead = fopen(argv[1], "r");
    cont.In(fileRead);
    fclose(fileRead);

    auto fileWrite = fopen(argv[2], "w");
    cont.Out(fileWrite);
    cont.InsertionSort();


    fprintf(fileWrite, "%s", "\nThe Container has been sorted by Straight Insertion sort\n\n");

    cont.Out(fileWrite);
    fclose(fileWrite);

    auto end = std::chrono::high_resolution_clock::now();
    auto duration_ms = std::chrono::duration<double, std::milli>(end - start);

    printf("%s %f %s", "Program has successfully finished working. Time: ", duration_ms.count(), "ms\n");
    scanf("%s");
    return 0;
}
