#include <stdio.h>
#include "func.h"

int main() {

    char str[] = " the numBERr must be saved ";
    
    trim_string(str);
    
    printf("%s\n", str);

    return 0;
}