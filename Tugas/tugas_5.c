#include <stdio.h>

int main() {
    float pemasukan, pengeluaran, keuntungan, kerugian;

    // input pemasukan
    printf("Masukkan pemasukan: ");
    scanf("%f", &pemasukan);

    // input pengeluaran

    printf("Masukkan pengeluaran: ");
    scanf("%f", &pengeluaran);

    // Membandingkan pemasukan dan pengeluaran
    if (pemasukan >= pengeluaran) {
        // keuntungan = pemasukan lebih besar atau sama dengan pengeluaran
        keuntungan = pemasukan - pengeluaran; 
        printf("Keuntungan: %.f\n", keuntungan);
    } else {
        // kerugian = pengeluaran lebih besar dari pemasukan
        kerugian = pengeluaran - pemasukan;
        printf("Kerugian: %.f\n", kerugian);
    }

    return 0;
}