#include "stdio.h"
void main()
{
	int baris, kolom, matriks[3][4];
	printf("Input elemen Array : \n");
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4; kolom++){
			printf("matriks[%i][%i]", baris+1, kolom+1);
			scanf("%i", &matriks[baris][kolom]);
		}
		printf("\n");
	}
	printf("Isi array : \n");
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4; kolom++){
			printf("%i", matriks[baris][kolom]);
			}
			printf("\n");
	}
}