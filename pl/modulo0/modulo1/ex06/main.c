#include <stdio.h>
#include "sum_even.h"

int main() {

    int vec[] = {1, 2, 3, 4, 5};

    int sum = sum_even(vec, 5);

    printf("The sum of the even numbers is: %u \n", sum);

    return 0;
}