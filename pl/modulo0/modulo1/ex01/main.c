#include <stdio.h>

int main() {

    int x = 5;
    int *ptr_x = &x;
    float y = *ptr_x + 3;

    printf("Value of x: %u \n", x);
    printf("Value of y: %f \n", y);
    printf("Address of x: %p \n",(void*) &x);
    printf("Address of y %p \n", (void*) &y);
    printf("Address of ptr: %p \n", &ptr_x);
    printf("Value of ptr_x: %p \n", ptr_x);
    printf("Value pointed for ptr_u: %d \n", *ptr_x);
    
    printf("================================ \n");
    //===================================================================

    int vec[] = {10, 20, 30, 40};
    int* ptr_vec = vec;
    int z = *ptr_vec;
    int h = *(ptr_vec + 3);

    printf("Value of %d \n", z);
    printf("Value of %d \n", h);
    printf("Address of %p \n", vec);
    printf("Address of %p \n", ptr_vec);
    printf("ptr_vec value: %p \n", ptr_vec);
    printf("vec value: %p \n", vec);
    printf("Value pointed for ptr_vec: %ls \n", ptr_vec);

    //===================================================================

    int i;
    for (i = 0; i < 4; i++) {
        pri
        ntf("1: %p,%d\t", &vec[i], vec[i]);
    }
    printf("\n");

    for (ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++) {
        printf("2: %p,%d\t", ptr_vec, *ptr_vec);
    }
    printf("\n");
    
    for (ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--) {
        printf("3: %p,%d\t", ptr_vec, *ptr_vec);
    }

    //===================================================================

    printf("\n");
    ptr_vec = vec;

    printf("4: %p,%d\n", ptr_vec, *ptr_vec);

    a = *ptr_vec++;

    printf("5: %p,%d,%d\n", ptr_vec, *ptr_vec, a);

    ptr_vec = vec;

    a = (*ptr_vec)++;
    
    printf("6: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    
    ptr_vec = vec;
    
    a = *++ptr_vec;
    
    printf("7: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    
    ptr_vec = vec;
    
    a = ++ptr_vec;

    printf("8: %p,%d,%d\n", ptr_vec, ptr_vec, a);
    printf("\n");

    for (ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++) {
        printf("9: %p,%d\t", ptr_vec, ptr_vec);
    }

    //===================================================================

    printf("\n");
    
    unsigned int d = 0xAABBCCDD;
    
    printf("10: %p,%x\t", &d, d);
    
    printf("\n");
    
    unsigned char ptr_d = (unsigned char)&d;
    
    unsigned char p;

    for (p = ptr_d; p < ptr_d + sizeof(unsigned int); p++) {
        printf("11: %p,%x\t", p, (unsigned char)*p);
    }

    return 0;
}
