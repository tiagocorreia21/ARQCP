int count_words(char *str) {

    int count = 0;
    int in_word = 0;

    while(*str != '\0') {

        if (*str != ' ' && in_word == 0) {

            count++;
            in_word = 1;

        } else if(*str == ' ') {

            in_word = 0;
        }
        str++;
    }
    return count;
}