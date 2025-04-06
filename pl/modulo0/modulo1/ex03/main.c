#include <stdio.h>
#include "swap_numbers.h"

int main() {

    int a = 3, b = 4;

    char *s1, *s2;
    
    swap_nums(&a, &b);
    
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    
    s1 = "I should print second";
    s2 = "I should print first";
    
    swap_pointers(&s1, &s2);
    
    printf("s1 is %s\n", s1);
    printf("s2 is %s\n", s2);
    
    return 0;
}