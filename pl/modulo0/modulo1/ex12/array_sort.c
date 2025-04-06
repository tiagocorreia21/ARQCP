void array_sort(int *vec, int n) {

    int trocas;

    do {

        trocas = 0;

        for (int i = 0; i < n - 1; i++) {

            if (*(vec + i) > *(vec + i + 1)) {

                int aux = *(vec + i);
                *(vec + i) = *(vec + i + 1);
                *(vec + i + 1) = aux;

                trocas = 1;
            }
        }

    } while (trocas != 0);
}