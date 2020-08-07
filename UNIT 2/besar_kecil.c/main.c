#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Masukkan angka pertama : ");
	scanf("%d",&a);
	printf("Masukkan angka kedua   : ");
	scanf("%d",&b);
	printf("Masukkan angka ketiga  : ");
	scanf("%d",&c);
	if (a>b && b>c)
		printf("Angka terbesarnya %d dan terkecilnya %d",a,c);
	else if (a>c && c>b)
		printf("Angka terbesarnya %d dan terkecilnya %d",a,b);
	else if (b>a && a>c)
		printf("Angka terbesarnya %d dan terkecilnya %d",b,c);
	else if (b>c && c>a)
		printf("Angka terbesarnya %d dan terkecilnya %d",b,a);
	else if (c>a && a>b)
		printf("Angka terbesarnya %d dan terkecilnya %d",c,b);
	else
		printf("Angka terbesarnya %d dan terkecilnya %d",c,a);
	return (0);
}