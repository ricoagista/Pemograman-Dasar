#include <stdio.h>

int main() {
    float jari_jari, luas, keliling;
    const float PI = 3.14159;

    // Meminta pengguna memasukkan jari-jari
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    // Menghitung luas
    luas = PI * jari_jari * jari_jari;

    // Menghitung keliling
    keliling = 2 * PI * jari_jari;

    // Menampilkan hasil
    printf("\nLuas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);

    return 0;
}