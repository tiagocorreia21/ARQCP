#include <stddef.h>

void get_array_statistics(int* vec, int n, int* min, int* max, float* avg) {

    if (vec == NULL || n <= 0) {
        *min = 0;
        *max = 0;
        *avg = 0.0;
        return;
    }

    int sum = 0;

    *min = vec[0];
    *max = vec[0];

    for(int i = 0; i < n; i++) {

        sum += vec[i];

        if(vec[i] < *min) {
            *min = vec[i]; 
        }

        if(vec[i] > *max) {
            *max = vec[i];
        }
    }

    *avg = (float) sum / n;
}