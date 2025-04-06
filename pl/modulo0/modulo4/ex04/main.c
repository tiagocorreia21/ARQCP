#include <stdio.h>
#include "asm.h"

int main() {

    int num1 = 2;
    int num2 = 2;

    int *ptr;
    ptr = NULL;

    int result = sum_sub(num1, num2, ptr);

    printf("Result: %d \n", result);

    return 0;
}