#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nama[25];
	int umur;
	char lg;
	lg='Y';	
	while(lg=='Y' || lg=='y')
	{	
		printf("Masukkan nama anda : ");
		scanf("%s",nama);
		printf("Masukkan umur anda : ");
		scanf("%d",&umur);
		printf("Hai %s",nama);
		if (umur<=5)
			printf("\nAnda ternyata masih BALITA");
		else if (umur<17)
			printf("\nAnda masih kanak-kanak");
		else if (umur<=45)
			printf("\nAnda sudah dewasa");
		else if (umur<=55)
			printf("\nAnda sudah cukup tua");
		else if (umur<=75)
			printf("Anda sudah tua bangka");
		else
			printf("\nUmur anda keterlaluan");
		
		printf("\n\nIngin mengulang lagi[yt]? ");
		scanf("%c",&lg);
	}
}