#include <stdio.h>
#include <string.h>

#define MAX_BUAH 10

void urutkanAbjad(char buah[][20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(buah[i], buah[j]) > 0) {
                strcpy(temp, buah[i]);
                strcpy(buah[i], buah[j]);
                strcpy(buah[j], temp);
            }
        }
    }
}

int main() {
    char buah[MAX_BUAH][20];
    int jumlahBuah;

    printf("Masukkan jumlah buah (maksimal %d): ", MAX_BUAH);
    scanf("%d", &jumlahBuah);

    if (jumlahBuah > MAX_BUAH) {
        printf("Jumlah buah melebihi batas maksimal.\n");
        return 1;
    }

    for (int i = 0; i < jumlahBuah; i++) {
        printf("Masukkan nama buah ke-%d: ", i + 1);
        scanf("%s", buah[i]);
    }

    printf("\nNama buah dalam urutan yang diinputkan:\n");
    for (int i = 0; i < jumlahBuah; i++) {
        printf("%s\n", buah[i]);
    }

    urutkanAbjad(buah, jumlahBuah);

    printf("\nNama buah dalam urutan abjad:\n");
    for (int i = 0; i < jumlahBuah; i++) {
        printf("%s\n", buah[i]);
    }

    return 0;
}