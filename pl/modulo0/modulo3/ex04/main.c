#include <stdio.h>
#include "asm.h"

int main() {

    short vec[] = {1, 2, 3, 4};
    int num = 4;

    for(int i = 0; i < 4; i++) {
        printf("vec[%d] = %d \n", i, vec[i]);
    }

    printf("===============================\n");

    vec_add_three(vec, num);

    for (int i = 0; i < 4; i++) {
        printf("vec[%d] = %d \n", i, vec[i]);
    }

    return 0;
}
