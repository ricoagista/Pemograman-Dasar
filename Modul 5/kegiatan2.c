#include <stdio.h>

int main() {
    int jumlahMahasiswa, i, j;
    float nilai[100][3], rataMataKuliah[3], rataKeseluruhan = 0;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("Masukkan nilai untuk mahasiswa ke-%d (Matematika, Fisika, Kimia): ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &nilai[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        rataMataKuliah[j] = 0;
        for (i = 0; i < jumlahMahasiswa; i++) {
            rataMataKuliah[j] += nilai[i][j];
        }
        rataMataKuliah[j] /= jumlahMahasiswa;
    }

    for (i = 0; i < jumlahMahasiswa; i++) {
        for (j = 0; j < 3; j++) {
            rataKeseluruhan += nilai[i][j];
        }
    }
    rataKeseluruhan /= (jumlahMahasiswa * 3);

    printf("\nData Nilai Ujian:\n");
    printf("Mahasiswa\tMatematika\tFisika\tKimia\n");
    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("Mhs %d\t%.2f\t\t%.2f\t\t%.2f\n", i + 1, nilai[i][0], nilai[i][1], nilai[i][2]);
    }

    printf("\nRata-rata Nilai:\n");
    printf("Matematika: %.2f\n", rataMataKuliah[0]);
    printf("Fisika: %.2f\n", rataMataKuliah[1]);
    printf("Kimia: %.2f\n", rataMataKuliah[2]);
    printf("Rata-rata Keseluruhan: %.2f\n", rataKeseluruhan);

    return 0;
}