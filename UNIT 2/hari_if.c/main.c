#include <stdio.h>
int main()
{
	int kode;
	printf("Masukkan kode hari [1..7] : ");
	scanf("%d",&kode);
	if(kode==1)
		printf("\nIni kode hari SENIN ");
	else if(kode==2)
		printf("\nIni kode hari SELASA ");
	else if(kode==3)
		printf("\nIni kode hari RABU ");
	else if(kode==4)
		printf("\nIni kode hari KAMIS ");
	else if(kode==5)
		printf("\nIni kode hari JUMAT ");
	else if(kode==6)
		printf("\nIni kode hari SABTU ");
	else if(kode==7)
		printf("\nIni kode hari MINGGU ");
	else
		printf("\nKode yang anda masukkan tidak dikenal");
	return (0);
}