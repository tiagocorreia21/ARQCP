int find_pattern(char str[], char patt[]) {

    int i = 0;

    int result = 0;

    while(str[i] != '\0') {

        if(str[i] + str[i + 1] == patt) {

            result++;
        }
        i++;
    }

    return result;
}