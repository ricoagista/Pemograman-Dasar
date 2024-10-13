#include <stdio.h>
int main() 
{
    char nama[50];
    int umur;
    float gaji_pokok;
	printf("Masukkan nama: ");
    gets(nama);

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan gaji pokok: ");
    scanf("%f", &gaji_pokok);

    float tunjangan = gaji_pokok * 0.1;
    float total_gaji = gaji_pokok + tunjangan;

    printf("Nama: %s\n", nama);
    printf("Umur: %d tahun\n", umur);
    printf("Gaji Pokok: Rp%.2f\n", gaji_pokok);
    printf("Tunjangan: Rp%.2f\n", tunjangan);
    printf("Total Gaji: Rp%.2f\n", total_gaji);
}