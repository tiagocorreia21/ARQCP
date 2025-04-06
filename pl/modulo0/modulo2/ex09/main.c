#include <stdio.h>
#include "asm.h"

int a = 1;
int b = 2;
int c = 3;
int d = 4;

int main() {

    long result = sum_and_subtract();

    printf("Result: %lu \n", result);

    return 0;
}
