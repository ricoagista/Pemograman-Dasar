#include <stdio.h>

int main() {
    char nama[50], nim[10];
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Welcome message
    printf("=============================================\n");
    printf("          Program Penghitung Nilai Akhir          \n");
    printf("=============================================\n");

    // Mengambil input dari user
    printf("Masukkan Nama Mahasiswa: ");
    scanf("%s", nama);
    printf("Masukkan NIM Mahasiswa: ");
    scanf("%s", nim);
    printf("Masukkan Nilai Tugas (0-100): ");
    scanf("%f", &nilaiTugas);
    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);
    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiTugas * 0.2) + (nilaiUTS * 0.35) + (nilaiUAS * 0.45);

    // Menampilkan hasil
    printf("=============================================\n");
    printf("Nama Mahasiswa: %s\n", nama);
    printf("NIM Mahasiswa: %s\n", nim);
    printf("Nilai Tugas: %.2f\n", nilaiTugas);
    printf("Nilai UTS: %.2f\n", nilaiUTS);
    printf("Nilai UAS: %.2f\n", nilaiUAS);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir);

    return 0;
} 