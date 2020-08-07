#include <stdio.h>
int main()
{
	int a,b,c;
	c=0;
	printf("Masukkan angka : ");
	scanf("%d",&a);
	do{
		b=a%10;
		a=a/10;
		c=c+b;
		printf("%d + ",b);
	}while(a>0);
	printf("= %d",c);
	return(0);
}