#include <stdio.h>
int main()
{
	float uas, uts, tugas, na;
	char nim[25], nama[25];
	printf("Masukkan NIM  : ");
	gets(nim);
	printf("Masukkan Nama : ");
	gets(nama);
	printf("Masukkan Nilai\n");
	printf("1 UAS         : ");
	scanf("%f",&uas);
	printf("2 UTS         : ");
	scanf("%f",&uts);
	printf("3 Tugas       : ");
	scanf("%f",&tugas);
	na=0.3*uts+0.5*uas+0.2*tugas;
	printf("----------------------------------------------\n");
	printf("LAPORAN NILAI MAHASISWA\n");
	printf("NIM           : %s\n",nim);
	printf("Nama          : %s\n",nama);
	printf("Nilai Akhir   : %.0f             ",na);
	if (na>90)
		printf("Nilai Huruf : A\n");
	else if (na>70)
		printf("Nilai Huruf : B\n");
	else if (na>60)
		printf("Nilai Huruf : C\n");
	else if (na>50)
		printf("Nilai Huruf : D\n");
	else
		printf("Nilai Huruf : E\n");
	return(0);
}