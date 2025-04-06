int count_words(char str[]) {

    int i = 0;

    int number_of_words = 0;

    while(str[i] != '\0') {

        if(str[i] == ' ' || str[i + 1] == '\0') {

            number_of_words++;
        }
        i++;
    }
    return number_of_words;
}