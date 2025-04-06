#include <stdio.h>
#include "asm.h"

int main() {

    long x = 6;

    int result = count_bits_zero(x);

    printf("Number of active bits: %d \n", result);

    return 0;
}
