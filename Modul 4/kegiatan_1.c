#include <stdio.h>

int main() {
    int transaksi, total, lanjut;

    do {
        total = 0;
        printf("=== Pencatatan Transaksi ===\n");
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan):\n");

        for (;;) {
            scanf("%d", &transaksi);
            if (transaksi == 0) break;
            total += transaksi;
        }

        printf("Total dari transaksi tersebut adalah: %d\n", total);

        printf("Apakah Anda ingin mencatat transaksi lagi? (1=Ya, 0=Tidak): ");
        scanf("%d", &lanjut);

    } while (lanjut == 1);

    printf("Terima kasih!\n");
    return 0;
}
