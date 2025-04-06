#include <stdio.h>
#include "asm.h"

int length1 = 2;
int length2 = 2;
int height = 4;

int main() {

    int area = getArea();

    printf("Area: %d \n", area);

    return 0;
}
