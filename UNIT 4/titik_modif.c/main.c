#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int X, Y;
} PTitik;
int NilX, NilY ;
PTitik NilaiTitik;
PTitik CreateTitik(int x1, int x2)
{
	PTitik Hsl;
	Hsl.X = x1; Hsl.Y=x2;
	return Hsl;
}
PTitik p,q;
PTitik TambahTitik(PTitik Titik1, PTitik Titik2)
{
	PTitik jml;
	jml.X = Titik1.X + Titik2.X;
	jml.Y = Titik1.Y + Titik2.Y;
	return jml;
}
main()
{
	printf("Masukkan Nilai x dan y Sembarang, lalu Enter\n");
	scanf("%d %d", &NilX, &NilY);
	printf("Masukkan nilai x1, y1 dan x2, y2, lalu Enter\n");
	scanf("%d %d %d %d",&p.X, &p.Y, &q.X, &q.Y);
	printf("Sebelum pemanggilan fungsi CreateTitik : \n");
	printf("Nilai Absis = %d, Nilai Ordinat = %d\n", NilaiTitik.X, NilaiTitik.Y);
	NilaiTitik = CreateTitik(NilX, NilY);
	printf("Setelah pemanggilan fungsi CreateTitik : \n");
	printf("Nilai Absis = %d, Nilai Ordinat = %d\n", NilaiTitik.X, NilaiTitik.Y);
	NilaiTitik = TambahTitik(p, q);
	printf("Setelah pemanggilan fungsi TambahTitik : \n");
	printf("Nilai Absis = %d, Nilai Ordinat = %d\n", NilaiTitik.X, NilaiTitik.Y);
}
