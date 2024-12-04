#include <stdio.h>

#define MAX_BARANG 100

struct barang {
    char nama[50];
    int harga;
    int jumlah;
};

struct barang daftarBarang[MAX_BARANG];
int jumlahBarang = 0;

void inputBarang() {
    if (jumlahBarang < MAX_BARANG) {
        printf("Masukkan data barang:\n");
        printf("Nama Barang: ");
        scanf("%s", daftarBarang[jumlahBarang].nama);
        printf("Harga: ");
        scanf("%d", &daftarBarang[jumlahBarang].harga);
        printf("Jumlah: ");
        scanf("%d", &daftarBarang[jumlahBarang].jumlah);
        jumlahBarang++;
        printf("Data barang berhasil ditambahkan!\n");
    } else {
        printf("Maaf, kapasitas penyimpanan barang sudah penuh.\n");
    }
}

void tampilkanData() {
    if (jumlahBarang == 0) {
        printf("Belum ada data barang yang dimasukkan.\n");
    } else {
        printf("Daftar Barang:\n");
        for (int i = 0; i < jumlahBarang; i++) {
            printf("Nama Barang: %s\n", daftarBarang[i].nama);
            printf("Harga: %d\n", daftarBarang[i].harga);
            printf("Jumlah: %d\n", daftarBarang[i].jumlah);
            printf("Harga Total: %d\n\n", daftarBarang[i].harga * daftarBarang[i].jumlah);
        }
    }
}

int main() {
    int pilihan;

    do {
        printf("\nMenu:\n");
        printf("1. Insert data\n");
        printf("2. Tampilkan data\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                inputBarang();
                break;
            case 2:
                tampilkanData();
                break;
            case 0:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 0);

    return 0;
}