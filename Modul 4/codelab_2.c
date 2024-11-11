#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Loop untuk memeriksa setiap karakter
    for (i = 0; i < len; i++) {
        // Asumsikan karakter saat ini unik
        int isUnique = 1;

        // Loop untuk membandingkan dengan karakter sebelumnya
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                // Jika karakter ditemukan sebelumnya, tandai sebagai tidak unik
                isUnique = 0;
                break;
            }
        }

        // Jika karakter unik, cetak
        if (isUnique) {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
}