#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("Masukkan sisi tegak : ");scanf("%d",&a);
	printf("Masukkan sisi alas  : ");scanf("%d",&b);
	c = sqrt(a*a + b*b);
	printf("Panjang sisi miring : %d",c);
}
