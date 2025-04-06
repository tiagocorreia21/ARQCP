#include <stdio.h>
#include "asm.h"

int num1 = 2;
int num2 = 1;

int main() {

    int res1 = sum();

    printf("Sum: %d \n", res1);

    int sub = subtract();

    printf("Sub: %d \n", sub);

    return 0;
}
