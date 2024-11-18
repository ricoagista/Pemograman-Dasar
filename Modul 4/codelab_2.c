#include <stdio.h>

int main(int argc, char** argv)
{
	char str [100]; 
	int i,j;
	int penggulangan;

	printf("Masukan string :");
	gets(str);
	printf("Karakter unik dalam string  anda adalah ");

	  for (i = 0; str[i] != '\0'; i++) {
		  penggulangan=0;
			   

          for (j = 0; j < i; j++) {
			  if(str[i]==str[j]){
				  penggulangan=1;
				  break;
			  }
	     }

		  if(penggulangan){
			  continue;
		  }
              printf("%c", str[i]);
	  }
	printf("\n");
   
	
	return 0;
}