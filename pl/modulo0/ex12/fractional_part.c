int fractional_part(char x[]) {

    int i = 0;

    int result = 0;

    while (x[i] != '.' && x[i] != '\0') {
        i++;
    }

    if (x[i] == '.') {

        i++;

        while (x[i] != '\0') {

            result = result * 10 + (int)(x[i] - '0');
            i++;
        }
    }

    return result;
}