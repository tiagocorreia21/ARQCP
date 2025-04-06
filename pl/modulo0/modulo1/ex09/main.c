#include <stdio.h>
#include "get_array_statistics.h"

int main() {

    int vec[] = {4, 2, 8, 6, 1, 9, 3};
    int n = sizeof(vec) / sizeof(vec[0]);

    int min, max;
    float avg;

    get_array_statistics(vec, n, &min, &max, &avg);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Avg: %.2f\n", avg);

    return 0;
}