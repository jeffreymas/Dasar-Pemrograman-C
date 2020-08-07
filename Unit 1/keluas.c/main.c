#include <stdio.h>
int main()
{
	float pi=3.14;
	float jari_jari, luas, keliling;
	
	jari_jari = 7.0;
	luas = 0.5 * pi * jari_jari * jari_jari;
	keliling = 2 * pi * jari_jari;

	printf("luas lingkaran %f\n",luas);
	printf("keliling lingkaran %f\n",keliling);
}