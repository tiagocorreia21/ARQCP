#include <stdio.h>
#include "array_sort.h"

int main() {

    int vec[] = {5, 6, 9, 1, 3};

    array_sort(vec, 5);

    for(int i = 0; i < 6; i++) {
        printf("Position vec %u : %u \n", i, vec[i]);
    }

    return 0;
}