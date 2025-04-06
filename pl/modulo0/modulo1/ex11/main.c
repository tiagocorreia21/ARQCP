#include <stdio.h>
#include "sum_odd.h"

int main() {

    int vec[] = {5, 4, 3, 2, 1, 8};

    int result = sum_odd(vec);

    printf("The sum of the odd numbers is: %u \n", result);

    return 0;
}