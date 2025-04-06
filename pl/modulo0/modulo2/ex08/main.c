#include <stdio.h>
#include "asm.h"

extern short s1;
extern short s2;

int main() {

    short result = crossSubBytes();

    printf("Result %hd \n", result);

    return 0;
}