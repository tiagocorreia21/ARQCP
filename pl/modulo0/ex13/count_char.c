int count_char(char str[], int c) {

    int count = 0;

    int i = 0;

    char c1 = (char) c;

    while(str[i] != '\0') {

        if(str[i] == c1) {
            count++;
        }

        i++;
    }

    return count;
}