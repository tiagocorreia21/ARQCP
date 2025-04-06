#include <stdio.h>
#include "func.h"

int main() {

    short vec1[] = {1, 2, 3};

    short vec2[] = {4, 5, 6};

    for(int i = 0; i < 3; i++) {

        printf("Position vec1 %u : %d \n", i, vec1[i]);
    }

    printf("\n");

    for (int j = 0; j < 3; j++) {

        printf("Position vec2 %u : %d \n", j, vec2[j]);
    }

    printf("\n");

    swap(vec1, vec2, 3);

    for (int k = 0; k < 3; k++) {

        printf("Position vec1 %u : %d \n", k, vec1[k]);
    }

    printf("\n");

    for (int l = 0; l < 3; l++) {

        printf("Position vec2 %u : %d \n", l, vec2[l]);
    }

    printf("\n");
    
    return 0;
}