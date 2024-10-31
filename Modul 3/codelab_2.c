#include <stdio.h>

enum KelasTiket {
    Economy = 1,
    Business = 2,
    FirstClass = 3
};

int main() {
    int pilihan;
    float hargaTotal = 0;

    printf("Pilih Kelas Tiket:\n");
    printf("1. Economy\n");
    printf("2. Business\n");
    printf("3. FirstClass\n");

    printf("Masukkan pilihan (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case Economy:
            printf("Anda memilih kelas Economy\n");
            hargaTotal = 1 * 200; // Contoh harga tiket Economy
            break;
        case Business:
            printf("Anda memilih kelas Business\n");
            hargaTotal = 1 * 500; // Contoh harga tiket Business
            break;
        case FirstClass:
            printf("Anda memilih kelas FirstClass\n");
            hargaTotal = 1 * 800; // Contoh harga tiket FirstClass
            break;
        default:
            printf("Pilihan tidak valid\n");
    }

    if (pilihan >= 1 && pilihan <= 3) {
        printf("Harga total: Rp %.2f\n", hargaTotal);
    }

    return 0;
}