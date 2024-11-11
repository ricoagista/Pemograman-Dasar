#include <stdio.h>

int main() {
    int transaksi, total = 0, lanjut = 1;

    while (lanjut == 1) {
        printf("\n                         Pencatatan Transaksi ===\n");
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan): ");

        while (1) {
            scanf("%d", &transaksi);
            if (transaksi == 0) {
                break;
            }
            total += transaksi;
        }

        printf("Total dari transaksi tersebut adalah: %d\n", total);

        printf("Apakah Anda ingin mencatat transaksi lagi? (1-Ya, 0-Tidak): ");
        scanf("%d", &lanjut);

        if (lanjut != 1) {
            printf("Terima kasih!\n");
        }
    }

    return 0;
}