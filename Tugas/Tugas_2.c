#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    char alamat[100];
    int umur;
    double gaji, tunjangan;

    // Input data pribadi
    printf("Masukkan Nama: ");
    scanf("%s", nama);

    printf("Masukkan Umur: ");
    scanf("%d", &umur);

    printf("Masukkan Alamat: ");
    scanf(" %s", alamat);

    printf("Masukkan Gaji: ");
    scanf("%lf", &gaji);

    // Hitung tunjangan
    tunjangan = gaji * 0.2;

    // Tampilkan hasil
    printf("Nama: %s\n", nama);
    printf("Umur: %d tahun\n", umur);
    printf("Alamat: %s\n", alamat);
    printf("Gaji: Rp %.2lf\n", gaji);
    printf("Tunjangan (20%%): Rp %.2lf\n", tunjangan);
}