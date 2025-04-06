#include <stdio.h>
#include "count_words.h"

int main() {

    char str[] = "Hello world Tree";

    int result = count_words(str);

    printf("The number of words in %s is %u \n", str, result);

    return 0;
}