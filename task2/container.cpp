#include "container.h"
#include "shape.h"

container::container() {
    len = 0;
}

void container::In(FILE *in) {
    int n;
    fscanf(in, "%d", &n);
    for (int i = 0; i < n; ++i) {
        list[len] = list[len]->GetShape(in);
        if ((list[len]) != nullptr) {
            len++;
        }
    }
}

void container::Out(FILE *out) {
    fprintf(out, "%s%d%s", "Container contains ", len, " elements.\n");

    for (int i = 0; i < len; i++) {
        fprintf(out, "%d", i);
        fprintf(out, "%s", ": ");
        list[i]->Output(out);
    }
}

void container::InsertionSort() {
    shape *key;
    int i = 0;
    for (int j = 1; j < len; j++) {
        key = list[j];
        i = j - 1;
        while (i >= 0 && list[i]->Square() < key->Square()) {
            list[i + 1] = list[i];
            i = i - 1;
            list[i + 1] = key;
        }
    }
}
