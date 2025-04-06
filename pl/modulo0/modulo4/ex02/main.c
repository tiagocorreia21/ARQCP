#include <stdio.h>
#include "asm.h"

int main() {

    int x = 5;

    long result = sum2_n(x);

    printf("Result: %ld \n", result);

    return 0;
}
