void format_word(char *str) {

    int capitalize = 1;

    while(*str != '\0') {

        if(*str == ' ') {

            capitalize = 1;

        } else if (capitalize && *str >= 'a' && *str <= 'z') {

            *str = *str - ('a' - 'A');
            capitalize = 0;

        } else {

            capitalize = 0;
        }
        str++;
    }
}