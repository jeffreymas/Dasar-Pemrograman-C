#include "stdio.h"
int main()
{
	int n, m, n1, m1, i, j, k;
	int M1[100][100];
	int M2[100][100];
	int M3[100][100];
	printf("Operasi Perkalian 2 Buah Matriks\n");
	printf("Matriks pertama berorde : ");
	scanf("%i, %i", &m, &n);
	printf("Matriks kedua berorde : ");
	scanf("%i, %i", &m1, &n1);
	if (n!=m1)
		printf("Perkalian matriks tidak dapat dilakukan, karena tidak sesuai dengan aturan perkalian matriks \n");
	else
	{for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				printf("Masukkan elemen M1[%i %i] = ",i,j);
				scanf("%i", &M1[i][j]);
			}
		}
	}
	for(i=0; i<m1; i++)
	{
		for(j=0; j<n1;j++)
		{
			printf("Masukkan elemen M2[%i %i] = ",i,j);
			scanf("%i", &M2[i][j]);
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n1; j++)
		{
			M3[i][j] = 0;
			for(k=0; k<m1; k++)
			{
				M3[i][j]=M3[i][j]+(M1[i][k]*M2[k][j]);
			}
		}
	}
	printf("Hasil perkaliannya adalah : ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n1;j++)
		{
			printf("M3[%i %i] = %i \n",i,j, M3[i][j]);
		}
	}
	return 0;
}
