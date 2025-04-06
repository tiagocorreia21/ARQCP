#include <stdio.h>

int main() {

    double num1 = 5.0;
    int num2 = 10;
    char c = 'A';

    double* p1;
    int* p2;
    char* p3;

    p1 = &num1;
    p2 = &num2;
    p3 = &c;

    printf("The value in num1 is: %f \n", num1);
    printf("The address of num1 is: 0x%p \n", (void *)&num1);
    printf("The size of num1 (in bytes): %lu \n", sizeof(num1));
    printf("The value in p1 is: %p \n", p1);
    printf("The size of p1 (in bytes): %lu \n", sizeof(p1));

    printf("\n");

    printf("The value in num2 is: %u \n", num2);
    printf("The address of num2 is: 0x %p \n", (void *) &num2);
    printf("The size of num2 (in bytes): %lu \n", sizeof(num2));
    printf("The value in p2 is: %p \n", p2);
    printf("The size of p2 (in bytes): %lu \n", sizeof(p2));

    printf("\n");

    printf("The value in c is: %d \n", c);
    printf("The address of c is: 0x%p \n", (void*) &c);
    printf("The size of num1 (in bytes): %lu \n", sizeof(c));
    printf("The value in p3 is: %p \n", p3);
    printf("The size of p3 (in bytes): %lu \n", sizeof(p3));

    return 0;
}
