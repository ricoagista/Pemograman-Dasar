#include <stdio.h>
#include <string.h>

int main()
{
	//memasukan jumlah data
 int jml_index=10;
 printf("Masukanjumlahdata : ");
 scanf("%d", &jml_index);

 //masukan nama per index
  	  int y; 
	char nilai[jml_index][100];
	  for(y=0; y<jml_index; y++){
   	 printf("Masukannamake-%d: ", y);
   	  scanf("%s", nilai[y]);
  }
 //loooping untuk menampilkan array
    int j;
     printf("\ndaftar Nama sebelum di urutkan\n");
     for(j=0; j<jml_index; j++){
		 printf("Nama : %s\n", nilai[j]);
	 }
// Mengurutkan nama dengan algoritma selection sort
    for (int i = 0; i < jml_index - 1; i++) {
        int min_idx = i; // Indeks elemen terkecil
        for (int j = i + 1; j < jml_index; j++) {
            // Membandingkan nilai[j] dengan nilai[min_idx]
            if (strcmp(nilai[j], nilai[min_idx]) < 0) {
                min_idx = j; // Menyimpan indeks terkecil
            }
        }
        // Menukar elemen terkecil dengan elemen ke-1
        if (min_idx != i) {
            char temp[100];
            strcpy(temp, nilai[i]);
            strcpy(nilai[i], nilai[min_idx]);
            strcpy(nilai[min_idx], temp);
        }
    }

    // Menampilkan nama yang sudah diurutkan
    printf("\nDaftar Nama (Setelah Diurutkan):\n");
    for (int j = 0; j < jml_index; j++) {
        printf("Nama : %s\n",  nilai[j]);
    }

	return 0;
}