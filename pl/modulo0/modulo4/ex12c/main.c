#include <stdio.h>
#include "asm.h"

int main() {

    int vec[] = {1, 2, 3, 0};
    int num = 4;

    int result = vec_count_bits_zero(vec, num);

    printf("Result %d \n", result);

    return 0;
}
