#include <stdio.h>
int main()
{
	int Q, V, C;
	printf("Masukkan banyaknya muatan (Q): ");scanf("%d",&Q);
	printf("Masukkan besarnya tegangan (V): ");scanf("%d",&V);
	C=Q/V;
	printf("Besarnya kapasitansi adalah %d",C);
}