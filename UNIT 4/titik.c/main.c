#include <stdio.h>

/*---Kamus Global---*/
typedef struct {
	int X, Y;
} Titik;

int NilX, NilY ;
Titik NilaiTitik;

/*---Deklarasi Fungsi---*/
Titik CreateTitik(int x1, int x2)

{
	/*Kamus Lokal :*/
	Titik Hsl;
	/*Algoritma :*/
	Hsl.X = x1; Hsl.Y=x2;
	return Hsl;
}

main()
{
	printf("Masukkan Nilai x dan y Sembarang, lalu Enter\n");
	scanf("%d %d", &NilX, &NilY);
	printf("Sebelum pemanggilan fungsi CreateTitik : \n");
	printf("Nilai Absis = %d, Nilai Ordinat = %d\n", NilaiTitik.X, NilaiTitik.Y);
	NilaiTitik = CreateTitik(NilX, NilY);
	printf("Setelah pemanggilan fungsi CreateTitik : \n");
	printf("Nilai Absis = %d, Nilai Ordinat = %d\n", NilaiTitik.X, NilaiTitik.Y);
}