#include <stdio.h>
#include "asm.h"

extern int length1;
extern int length2;
extern int height;

int main() {

    int area = getArea();

    printf("Area: %d \n", area);

    return 0;
}
