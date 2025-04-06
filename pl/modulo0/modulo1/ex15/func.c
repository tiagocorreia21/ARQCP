void trim_string(char *str) {

    char *p;
    p = str;
    
    while (*(str + 1) != '\0') {
        
        if(*str != ' ') {
            *p = *str;
            p++;
        }
        str++;
    }
    *p = '\0';
}