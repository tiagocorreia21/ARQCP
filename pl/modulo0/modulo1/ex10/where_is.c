#include <stddef.h>

char* where_is(char *str, char c) {

    if(str == NULL) return NULL;

    while(*str != '\0') {

        if(*str == c) {
            return str;
        }
        str++;
    }
    return NULL;
}