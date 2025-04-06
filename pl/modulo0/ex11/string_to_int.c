int string_to_int(char str[]) {

    int i = 0;

    int result = 0;

    while(str[i] != '\0') {

        result = result * 10 + (int)(str[i] - '0');
        i++;
    }
    return result;
}