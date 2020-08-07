#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int HH;
	int MM;
	int SS;
} jam;
/*---Prototype---*/
void ResetJam (jam *J);

void TulisJam (jam J);

int JamToDetik (jam J);

jam DetikToJam (int d);

/*---Body Prototype---*/
void ResetJam (jam *J)
{
	/*Kamus Lokal*/
	/*Algoritma*/
	(*J) .HH = 0;
	(*J) .MM = 0;
	(*J) .SS = 0;
}
void TulisJam (jam J)
{
	/*Kamus Lokal*/
	/*Algoritma*/
	printf("Jam : %2d:%2d:%2d\n", J.HH, J.MM, J.SS);
}
int JamToDetik (jam J)
{
	/*Kamus Lokal*/
	/*Algoritma*/
	return (J.HH * 3600 + J.MM + 60 + J.SS);
}
jam DetikToJam (int d)
{
	/*Kamus Lokal*/
	jam J;
	int sisa;
	/*Algoritma*/
	J.HH = d / 3600;
	sisa = d % 3600;
	J.MM = sisa /60;
	J.SS = sisa % 60;
	return J;
}
int main()
{
	/*Kamus Lokal*/
	jam J1;
	jam J2;
	int dt=30000;
	/*Algoritma*/
	printf("Assalamu'alaikum \n");
	ResetJam(&J1);
	printf("Konversi jam ke detik : %d\n", JamToDetik(J1));
	printf("\n============\n");
	printf("%d detik = ", dt);
	J2=DetikToJam(dt);
	TulisJam(J2);
	return 0;
}