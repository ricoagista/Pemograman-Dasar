#include <stdio.h>
void arrayGenap(int arr[3][4],int baris, int kolom) {
	printf("\nBilangan genap dari array\n");
   for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (arr[i][j] % 2 == 0) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}
void arrayGanjil(int arr[3][4],int baris, int kolom) {
	printf("\nBilangan ganjil dari array\n");
   for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (arr[i][j] % 2 != 0) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main()
{
	int i,j;
	 int arr[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
	 for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
             
                printf("%d ", arr[i][j]);
        }	
        printf("\n");
	 
	 }
	 
	 arrayGenap(arr,3,4);
	 arrayGanjil(arr,3,4);
	return 0;
}