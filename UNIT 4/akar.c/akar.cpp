#include <stdio.h>
#include <math.h>
typedef struct{
float x1, x2;
} Titik;
Titik NilaiTitik;
Titik CreateTitik (float a, float b, float c)
{
	float E;
	E=b*b-4*a*c;
	Titik Hsl;
	Hsl.x1 = ((-b+sqrt(E))/2*a);
	Hsl.x2 = ((-b-sqrt(E))/2*a);
	return Hsl;
}
int main ()
{
	float d,e,f,D;
	printf("Program untuk menghitung akar persamaan kuadrat ax^2+bx+c=0\n");
	printf("Nilai a  = ");
	scanf("%f",&d);
	printf("Nilai b  = ");
	scanf("%f",&e);
	printf("Nilai c  = ");
	scanf("%f",&f);
	D=e*e-4*d*f;
	if (D>=0)
	{
		NilaiTitik=CreateTitik(d,e,f);
		printf("Nilai x1 = %f \n",NilaiTitik.x1);
		printf("Nilai x2 = %f \n",NilaiTitik.x2);
	}
	else
	{printf("Nilai akarnya imajiner\n");}
	return (0);
}
