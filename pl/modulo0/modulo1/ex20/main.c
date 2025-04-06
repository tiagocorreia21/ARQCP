#include <stdio.h>
#include "func.h"

int main() {

    int vec_ints[] = {123, 456, 789, 1011, 1213, 1415}; 
    int n = sizeof(vec_ints) / sizeof(vec_ints[0]);     

    
    long vec_longs[n / 2];

   
    compress(vec_ints, n, vec_longs);

    for (int i = 0; i < n / 2; i++) {
        printf("vec_longs[%d] = %ld\n", i, vec_longs[i]);
    }

    return 0;
}