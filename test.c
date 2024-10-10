#include <stdio.h>

int main() {
    int pilihan, jumlah;
    float hargaTotal = 0, harga;

    // Daftar menu dengan kode dan harga
    printf("=======================\n");
    printf("Daftar Menu:\n");
    printf("=======================\n");
    printf("1. Nasi Goreng (Rp 15.000)\n");
    printf("-----------------------\n");
    printf("2. Mie Goreng (Rp 12.000)\n");
    printf("-----------------------\n");
    printf("3. Bakso (Rp 10.000)\n");
    printf("-----------------------\n");

    // Meminta input pilihan menu
    printf("Masukkan pilihan menu Anda: ");
    scanf("%d", &pilihan);

    // Meminta input jumlah pesanan
    printf("Masukkan jumlah pesanan: ");
    scanf("%d", &jumlah);

    // Menghitung harga berdasarkan pilihan (menggunakan if-else)
    if (pilihan == 1) {
        harga = 15000;
    } else if (pilihan == 2) {
        harga = 12000;
    } else if (pilihan == 3) {
        harga = 10000;
    } else {
        printf("Pilihan menu tidak valid.\n");
        return 1;
    }

    // Menghitung total harga
    hargaTotal = harga * jumlah;

    // Menampilkan total harga
    printf("Total harga: Rp %.2f\n", hargaTotal);

    return 0;
}
