#include <stdio.h>

int main() {
  int num, i;

  // Meminta input dari pengguna untuk menghitung faktorial
  printf("Masukkan angka untuk menghitung faktorial: ");
  scanf("%d", &num);  // Menyimpan input angka dari pengguna

  long long factorial = 1;  // Menyimpan hasil faktorial, dimulai dari 1
  // Perulangan untuk menghitung faktorial
  for (i = 1; i <= num; ++i) {
    factorial *= i;  // Mengalikan setiap nilai i untuk mendapatkan faktorial
  }

  // Menampilkan hasil faktorial
  printf("Faktorial dari %d adalah: %lld\n", num, factorial);

  // Meminta input lagi dari pengguna untuk menghasilkan deret Fibonacci
  printf("Masukkan angka untuk menghasilkan deret Fibonacci: ");
  scanf("%d", &num);  // Menyimpan input angka dari pengguna untuk deret Fibonacci

  // Array untuk menyimpan nilai-nilai deret Fibonacci
  int fibonacci[num];
  fibonacci[0] = 0;  // Angka pertama deret Fibonacci adalah 0
  fibonacci[1] = 1;  // Angka kedua deret Fibonacci adalah 1

  // Perulangan untuk menghasilkan deret Fibonacci
  for (i = 2; i < num; ++i) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];  // Setiap angka adalah jumlah dua angka sebelumnya
  }

  // Menampilkan deret Fibonacci yang dihasilkan
  printf("Deret Fibonacci hingga suku ke-%d adalah: ", num);
  for (i = 0; i < num; ++i) {
    printf("%d ", fibonacci[i]);  // Menampilkan setiap angka dalam deret Fibonacci
  }
  printf("\n");

  // Menampilkan pesan bahwa eksekusi kode berhasil
  printf("== Code Execution Successful ==\n");

  return 0;  // Program selesai dengan status 0 (berhasil)
}
