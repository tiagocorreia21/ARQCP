#include <stdio.h>
#include "count_words.h"

int main() {

    char str[] = "Hello World";

    int x = count_words(str);
    
    printf("%d\n", x); 

    return 0;
}