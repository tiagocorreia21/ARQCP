#include <stdio.h>
#include "asm.h"

short s1 = 1;

int main() {

    short result = swapBytes();

    printf("Result: %hd \n", result);

    //printf("%p \n", main);

    return 0;
}