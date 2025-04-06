#include <stdio.h>
#include "count_value.h"

int main() {

    int vec[] = {1, 2, 3, 3, 3};

    int n = 5;

    int value = 3;

    int result = count_value(vec, n, value);

    printf("The number of times that %u appears in the array is %u \n", value, result);
}