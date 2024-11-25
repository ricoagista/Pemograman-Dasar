#include <stdio.h>

void tampilkanGenap(int arr[][4], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (arr[i][j] % 2 == 0) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int x[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    // Langkah 2: Tampilkan bilangan genap
    printf("Bilangan genap:\n");
    tampilkanGenap(x, 3, 4);

    // Langkah 3: Buat array baru untuk bilangan genap dan ganjil
    int genap[10], ganjil[10]; // Asumsikan maksimal 10 bilangan genap/ganjil
    int idxGenap = 0, idxGanjil = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (x[i][j] % 2 == 0) {
                genap[idxGenap++] = x[i][j];
            } else {
                ganjil[idxGanjil++] = x[i][j];
            }
        }
    }

    // Tampilkan array baru
    printf("Bilangan genap: ");
    for (int i = 0; i < idxGenap; i++) {
        printf("%d ", genap[i]);
    }
    printf("\n");

    printf("Bilangan ganjil: ");
    for (int i = 0; i < idxGanjil; i++) {
        printf("%d ", ganjil[i]);
    }
    printf("\n");

    return 0;
}