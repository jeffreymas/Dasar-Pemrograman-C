#include <stdio.h>
main ()
{
	int a;
	float c;
	char *S;
	a=250;
	c=2.5;
	S="Hallo Unsada";
	printf("\nNilai a : %d",a);
	printf("\nNilai a : %5d",a);
	printf("\nNilai c : %f",c);
	printf("\nNilai c : %3f",c);
	printf("\nNilai c : %3.1f",c);
	printf("\nNilai c : %3.2f",c);
	printf("\nNilai c : %3.4f",c);
	printf("\nData S : %s",S);
	printf("\nData S : %15s",S);
	printf("\nData S : %-15s",S);
	printf("\nData S : %25s",S);
	printf("\nData S : %-25s",S);
}