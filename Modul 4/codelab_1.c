#include <stdio.h>

int main() {
    int bilangan, total = 0, jumlahBilangan = 0;
    double rataRata;

    printf("Masukkan bilangan bulat (masukkan angka negatif untuk berhenti): ");
    scanf("%d", &bilangan);

    while (bilangan >= 0) {
        total += bilangan;
        jumlahBilangan++;

        printf("Masukkan bilangan bulat (masukkan angka negatif untuk berhenti): ");
        scanf("%d", &bilangan);
    }

    if (jumlahBilangan > 0) {
        rataRata = (double)total / jumlahBilangan;
        printf("\nTotal bilangan: %d\n", total);
        printf("Rata-rata bilangan: %.2lf\n", rataRata);
    } else {
        printf("Tidak ada bilangan yang dimasukkan.\n");
    }

    return 0;
}