#include <stdio.h>
int main() 
{
	int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);
    
    int sum = a + b;
    printf("Penjumlahan: %d\n", sum);

    int difference = a - b;
    printf("Pengurangan: %d\n", difference);

    int product = a * b;
    printf("Perkalian: %d\n", product);

    if (b != 0) {
        float division = a / b;
        printf("Pembagian: %.2f\n", division);
    } else {
        printf("Error: Pembagian dengan nol\n");
    }

    return 0;
}