#include <stdio.h>
int main()
{
	int Nilai;
	printf("Masukkan Nilai Anda : ");
	scanf("%d",&Nilai);
	if (Nilai>60)
	{
		printf("Selamat, Anda Lulus");
	}
	else
	{
		printf("Maaf, Anda Belum Berhasil");
	}
	return(0);
}