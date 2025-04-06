#include <stdio.h>
#include "func.h"

int main() {

    short array1[] = {1, 1, 2, 3, 3, 4};
    short array2[] = {};

    int result = sort_without_reps(array1, 6, array2);

    for(int i = 0; i < 6; i++) {

        printf("Array1 %d : %d \n", i, array1[i]);

        printf("\n");
    }

    for (int i = 0; i < result; i++) {

        printf("Array2 %d : %d \n", i, array2[i]);

        printf("\n");
    }

    printf("The number of items placed in the second array: %u \n", result);

    return 0;
}