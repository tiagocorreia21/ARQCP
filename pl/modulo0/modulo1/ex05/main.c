#include <stdio.h>
#include "copy_vec.h"

int main() {

    int vec1[] = {1, 2, 3, 4, 5};

    int vec2[5];

    copy_vec(vec1, 5, vec2);

    for(int i = 0; i < 5; i++) {

        printf("Vec1: %u \n", vec1[i]);
        printf("vec2: %u \n", vec2[i]);
    }
 
    return 0;
}