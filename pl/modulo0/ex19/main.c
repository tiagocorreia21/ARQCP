#include <stdio.h>
#include "sum_matrix_values.h"

int main() {

    int mat[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}};

    // sum should be 120

    int mat_sum = sum_matrix_values(mat);

    printf("The sum of all matrix values: %u \n", mat_sum);

    return 0;
}