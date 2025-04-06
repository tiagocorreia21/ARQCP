void capitalize(char *str) {

    char *p;

    p = str;

    while(*p != '\0') {

        if(*p >= 'a' && *p <= 'z') {
            *p = *p - ('a' - 'A');
        }
        p++;
    }
}