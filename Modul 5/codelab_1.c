#include <stdio.h>
#include <string.h>

int main() {
    char nama[5][10] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    int nilai[5] = {85, 90, 78, 92, 88};

    printf("Daftar siswa dan nilai sebelum diubah:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %d\n", nama[i], nilai[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (strcmp(nama[i], "David") == 0) {
            nilai[i] = 95;
            break;
        }
    }

    printf("\nDaftar siswa dan nilai setelah diubah:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %d\n", nama[i], nilai[i]);
    }

    return 0;
}