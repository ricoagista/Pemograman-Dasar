#include <stdio.h>

int main() {
    const int BATAS_KALORI_HARIAN = 500; // Sesuaikan batas kalori harian sesuai kebutuhan
    int kalori_per_makanan, total_kalori = 0;

    // Pengenalan program
    printf("==== Program Penghitung Kalori Harian ====\n");
    printf("Program ini akan membantu Anda menghitung total kalori yang dikonsumsi.\n\n");

    // Mengambil input dari user
    printf("Masukkan kalori makanan pertama: ");
    scanf("%d", &kalori_per_makanan);
    total_kalori += kalori_per_makanan;

    printf("Masukkan kalori makanan kedua: ");
    scanf("%d", &kalori_per_makanan);
    total_kalori += kalori_per_makanan;

    printf("Masukkan kalori makanan ketiga: ");
    scanf("%d", &kalori_per_makanan);
    total_kalori += kalori_per_makanan;

    // Menampilkan pesan apakah total kalori melebihi batas kalori harian atau tidak
    if (total_kalori > BATAS_KALORI_HARIAN) {
        printf("\nTotal kalori Anda %d melebihi batas kalori harian.\n", total_kalori, BATAS_KALORI_HARIAN);
    } else {
        printf("\nTotal kalori Anda %d tidak melebihi batas kalori harian.\n", total_kalori, BATAS_KALORI_HARIAN);
    }

    // Penutupan program
    printf("\n===Code Execution Succesful ===\n");

    return 0;
}