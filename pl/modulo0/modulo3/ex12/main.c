#include <stdio.h>
#include "asm.h"

int main() {

    int vec[] = {1, 2, 3, 4, 5};
    int num = 5;

    char result = vec_zero(vec, num);

    printf("Result: %d \n", result);

    return 0;
}