#include <stdio.h>
#include "sum_integer_bytes.h"

int main() {

    unsigned int d = 0xAABBCCDD;
    int r = sum_integer_bytes(&d); // r = 0xDD+0xCC+0xBB+0xAA = 782

    printf("The sum of bytes is: %u\n", r);

    return 0;
}