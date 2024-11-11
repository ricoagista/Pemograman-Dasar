#include <stdio.h>

int main() {
    char kategori[20];
    double penghasilan, pajak, gajiBersih;

    printf("Masukkan kategori (pebisnis/pekerja): ");
    scanf("%s", kategori);

    printf("Masukkan penghasilan: ");
    scanf("%lf", &penghasilan);

    if (strcmp(kategori, "pebisnis") == 0) {
        if (penghasilan <= 3500000) {
            pajak = 0.25;
        } else {
            pajak = 0.2;
        }
    } else if (strcmp(kategori, "pekerja") == 0) {
        if (penghasilan <= 2500000) {
            pajak = 0.15;
        } else if (penghasilan <= 2000000) {
            pajak = 0.1;
        } else if (penghasilan <= 3000000) {
            pajak = 0.15;
        } else {
            pajak = 0.2;
        }
    } else {
        printf("Kategori salah.\n");
        return 1;
    }

    gajiBersih = penghasilan - (penghasilan * pajak);

    printf("Gaji bersih: %.2lf\n", gajiBersih);

    return 0;
}