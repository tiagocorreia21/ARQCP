#include <stdio.h>
#include "asm.h"

int main() {

    int vec[] = {2, 2, 2};
    short num = 3;

    int result = vec_sum(vec, num);

    printf("Result: %d \n", result);

    return 0;
}
