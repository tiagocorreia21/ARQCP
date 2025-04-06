int sort_without_reps(short *src, int n, short *dest) {

    int trocas;

    do {

        trocas = 0;

        for (int i = 0; i < n - 1; i++) {

            if (*(src + i) > *(src + i + 1)) {

                int aux = *(src + i);
                *(src + i) = *(src + i + 1);
                *(src + i + 1) = aux;

                trocas = 1;
            }
        }

    } while (trocas != 0);

    if(n == 0) return 0;

    int count = 1;

    *dest = *src;

    for(int i = 1; i < n; i++) {

        if(*(src + i) != *(src + i - 1)) {

            *(dest + count) = *(src + i);
            count++;
        }
    }
    return count;
}