#include <stdio.h>
int main()
{
	char operatore;
	double operand1, operand2;
	puts("Program kalkulator sederhana.....\n");
	puts("* => perkalian\n");
	puts("/ => pembagian\n");
	puts("+ => penjumlahan\n");
	puts("- => pengurangan\n");
	puts("Contoh Menghitung => 5 / 2 Lalu tekan ENTER");
	printf("\nSilahkan Menghitung Angka : ");
	scanf("%lf %c %lf", &operand1, &operatore, &operand2);
	switch (operatore)
	{
		case '*' :
			printf("Hasil = %.1f", operand1 * operand2);
			break;
		case '/' :
			printf("Hasil = %.1f", operand1 / operand2);
			break;
		case '+' :
			printf("Hasil = %.1f", operand1 + operand2);
			break;
		case '-' :
			printf("Hasil = %.1f", operand1 - operand2);
			break;
		default :
			puts("\nPerintah Anda Salah, Silahkan Ulangi");
	}
	return(0);
}