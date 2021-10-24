#ifndef TASK2_CONTAINER_H
#define TASK2_CONTAINER_H

#include <cstdio>
#include "shape.h"

class container {

private:
    enum {
        max_len = 1000
    };
    int len;
    shape *list[max_len];

public:
    container();

    ~container(){
        for (int i = 0; i < len; i++) {
            delete list[i];
        }
    }

    void In(FILE *in);

    void Out(FILE *out);

    void InsertionSort();
};


#endif //TASK2_CONTAINER_H
