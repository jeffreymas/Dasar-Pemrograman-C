#include <stdio.h>
main()
{
	int kode;
	printf("Masukkan kode hari [1..7] : ");
	scanf("%d",&kode);
	switch (kode)
	{
		case 1:
			printf("\nIni kode hari SENIN ");
			break;
		case 2:
			printf("\nIni kode hari SELASA ");
			break;
		case 3:
			printf("\nIni kode hari RABU ");
			break;
		case 4:
			printf("\nIni kode hari KAMIS ");
			break;
		case 5:
			printf("\nIni kode hari JUMAT ");
			break;
		case 6:
			printf("\nIni kode hari SABTU ");
			break;
		case 7:
			printf("\nIni kode hari MINGGU ");
			break;
		default:
			printf("\nKode yang anda masukkan tidak dikenal");
	}
}