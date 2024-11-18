#include <stdio.h>

void tampilkanGenap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[2][3] = {{6, 4, 2}, {5, 3, 1}};
    int genap[3], ganjil[3];
    int idxGenap = 0, idxGanjil = 0;

    printf("Bilangan genap pada arr1: ");
    tampilkanGenap(arr1, 6);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr2[i][j] % 2 == 0) {
                genap[idxGenap++] = arr2[i][j];
            } else {
                ganjil[idxGanjil++] = arr2[i][j];
            }
        }
    }

    printf("Array genap: ");
    for (int i = 0; i < idxGenap; i++) {
        printf("%d ", genap[i]);
    }
    printf("\n");

    printf("Array ganjil: ");

    for (i
    nt i = 0; i < idxGanjil; i++) {
        printf("%d ", ganjil[i]);
    }
    printf("\n");

    return 0;
}