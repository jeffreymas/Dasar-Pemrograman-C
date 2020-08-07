#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int nokursi;
	int statuskursi;
} InfoKursi;

typedef struct
{
	InfoKursi Kursi[4][10];
} Gbg;

Gbg Gerbong[10];

void buatkursi()
{
	int gb, kolom, baris;
	gb=0;
	while (gb < 10)
	{
		kolom = 0;
		while (kolom < 10)
		{
			baris = 0;
			while (baris < 4)
			{
				Gerbong[gb].Kursi[baris][kolom].nokursi = 4 * (kolom) + (baris+1);
				Gerbong[gb].Kursi[baris][kolom].statuskursi = 0;
				baris++;
			}
			kolom++;
		}
		gb++;
	}
}

void cetaknomor(int gb)
{
	printf("\nNomor kursi\n===========\n");
	int baris = 0;
	while (baris < 4)
	{
		int kolom = 0;
		while (kolom < 10)
		{
			printf("%3d", Gerbong[gb].Kursi[baris][kolom].nokursi);
			kolom++;
		}
		printf("\n");
		baris++;
	}
}

void cetakstatuskursi (int gb)
{
	printf("\nStatus kursi [0=kosong, 1=isi]\n==============================\n");
	int baris = 0;
	while (baris < 4)
	{
		int kolom = 0;
		while (kolom < 10)
		{
			printf("%3d",Gerbong[gb].Kursi[baris][kolom].statuskursi);
			kolom++;
		}
		printf("\n");
		baris++;
	}
}

void setstatuskursi (int gb)
{
	int kolom = 0;
	while (kolom < 10)
	{
		int baris = 0;
		while (baris < 4)
		{
			printf("No. kursi : %3d, status = ",Gerbong[gb].Kursi[baris][kolom].nokursi);
			ulang:
			scanf("%d",&Gerbong[gb].Kursi[baris][kolom].statuskursi);
			if (Gerbong[gb].Kursi[baris][kolom].statuskursi > 1 || Gerbong[gb].Kursi[baris][kolom].statuskursi < 0)
			{
				printf("Masukan hanya 1 atau 0, ulangi lagi\n");
				goto ulang;
			}
			baris++;
		}
		kolom++;
	}
}

void buatkursi();
void cetaknomor (int gb);
void cetakstatuskursi (int gb);
void setstatuskursi (int gb);

main()
{
	int g;
	buatkursi();
	printf("Jumlah gerbong dalam kereta adalah 10\n");
	printf("\nGerbong ke berapa yang ingin anda ketahui informasinya : ");
	scanf("%d",&g);
	printf("\nInformasi pada gerbong ke-%d : \n",g);

	cetaknomor(g);
	cetakstatuskursi(g);
}