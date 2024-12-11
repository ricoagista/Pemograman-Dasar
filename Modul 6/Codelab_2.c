#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 3 // Jumlah maksimum mahasiswa yang dapat disimpan
#define MAX_CHAR 50     // Panjang maksimal karakter untuk nama dan program studi

// Mendeklarasikan struktur Mahasiswa yang terdiri dari nama, nim, dan program studi
struct Mahasiswa {
    char nama[MAX_CHAR];  // Nama mahasiswa
    int nim;              // Nomor Induk Mahasiswa (NIM)
    char prodi[MAX_CHAR]; // Program studi mahasiswa
};

// Fungsi untuk menulis data mahasiswa ke dalam file
void tulisDataMahasiswa(struct Mahasiswa mahasiswa[], int jumlah) {
    // Membuka file "data_mahasiswa.txt" untuk menambahkan data di akhir file
    FILE *fp = fopen("data_mahasiswa.txt", "a");  
    if (fp == NULL) {  // Jika gagal membuka file
        printf("Gagal membuka file!\n");
        return;  // Menghentikan fungsi jika file tidak dapat dibuka
    }

    // Menulis data mahasiswa ke dalam file
    for (int i = 0; i < jumlah; i++) {
        fprintf(fp, "%s %d %s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].prodi);
    }

    // Menutup file setelah data ditulis
    fclose(fp);
    printf("Data mahasiswa berhasil ditulis ke file.\n");
}

// Fungsi untuk membaca data mahasiswa dari file
void bacaDataMahasiswa() {
    // Membuka file "data_mahasiswa.txt" untuk membaca isinya
    FILE *fp = fopen("data_mahasiswa.txt", "r");
    if (fp == NULL) {  // Jika gagal membuka file
        printf("Gagal membuka file!\n");
        return;  // Menghentikan fungsi jika file tidak dapat dibuka
    }

    struct Mahasiswa mahasiswa;
    // Membaca data dari file baris per baris
    while (fscanf(fp, "%s %d %s", mahasiswa.nama, &mahasiswa.nim, mahasiswa.prodi) != EOF) {
        // Menampilkan data mahasiswa yang dibaca dari file
        printf("Nama: %s\n", mahasiswa.nama);
        printf("NIM: %d\n", mahasiswa.nim);
        printf("Program Studi: %s\n\n", mahasiswa.prodi);
    }

    // Menutup file setelah selesai membaca
    fclose(fp);
}

int main() {
    int pilihan;  // Variabel untuk menyimpan pilihan menu dari pengguna
    struct Mahasiswa mahasiswa[MAX_MAHASISWA]; // Array untuk menyimpan data mahasiswa

    do {
        // Menampilkan menu pilihan
        printf("Pilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan); // Menerima input pilihan dari pengguna

        // Menentukan tindakan berdasarkan pilihan yang dimasukkan pengguna
        switch (pilihan) {
            case 1:
                // Mengumpulkan data mahasiswa dari pengguna
                for (int i = 0; i < MAX_MAHASISWA; i++) {
                    printf("Masukkan data mahasiswa ke-%d\n", i + 1);

                    // Mengambil input nama mahasiswa
                    printf("Nama: ");
                    getchar();  // Membersihkan karakter newline yang tersisa dari input sebelumnya
                    fgets(mahasiswa[i].nama, MAX_CHAR, stdin);  // Membaca input nama mahasiswa
                    mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = '\0'; // Menghapus karakter newline di akhir nama

                    // Mengambil input NIM mahasiswa
                    printf("NIM: ");
                    scanf("%d", &mahasiswa[i].nim);

                    // Mengambil input program studi mahasiswa
                    printf("Program Studi: ");
                    getchar();  // Membersihkan karakter newline
                    fgets(mahasiswa[i].prodi, MAX_CHAR, stdin);  // Membaca input program studi
                    mahasiswa[i].prodi[strcspn(mahasiswa[i].prodi, "\n")] = '\0'; // Menghapus karakter newline di akhir prodi
                }
                // Memanggil fungsi untuk menulis data mahasiswa ke file
                tulisDataMahasiswa(mahasiswa, MAX_MAHASISWA);
                break;

            case 2:
                // Memanggil fungsi untuk membaca dan menampilkan data mahasiswa dari file
                bacaDataMahasiswa();
                break;

            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 2);  // Program berhenti jika pilihan adalah 2 (Baca data mahasiswa)

    return 0;
}
