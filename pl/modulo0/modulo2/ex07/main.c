#include <stdio.h>
#include "asm.h"

short s1 = 1;
short s2 = 2;

int main() {

    short result = crossSubBytes();

    printf("Result %hd \n", result);

    return 0;
}