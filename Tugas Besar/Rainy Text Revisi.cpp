#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Kamus Global*/
int ubin, curah, angin;
char hujan[80];

//Fungsi untuk menentukan kecepatan hujan
int curahhujan ()
{
    int kec;
	if (curah<50)
	   kec=99999000;
    else if (curah<60)
       kec=79990000;
    else if (curah<70)
       kec=59970000;
    else if (curah<80)
       kec=39960000;
    else if (curah<90)
       kec=19950000;
    else if (curah<=100)
       kec=9994000;
    return kec;
}

//Prosedur untuk menentukan pengaruh angin
int efekangin ()
{
     if (angin<=13)
        printf(" ");
     else if (angin<=16)
        printf("  ");
     else if (angin <=19)
        printf("    ");
     else if (angin <=22)
        printf("     ");
}

//Prosedur untuk mencetak hujan
void cetakhujan ()
{
	char hujan[80];
	int x,y,z,kec;
	kec=curahhujan(); //inisialisasi variabel kec dengan fungsi curahhujan
	x=1;
	while(!kbhit()) //pengulangan while dg kondisi stop jika ada input dari keyboard
	{
        if (x%2==0)
            efekangin();
		for(y=1;y<=2*ubin;y++) //pengulangan for untuk mencetak hujan
		{
			hujan[y]='!';
			printf("%c",hujan[y]);
			y++;
			hujan[y]=' ';
			printf("%c",hujan[y]);
		}
		printf("\n\n");
        for(z=0;z<=kec;z++) //pengulangan untuk kecepatan hujan
   	    {
        }
        x++;
	}
}

//Fungsi program utama
int main()
{
    int a,b,c;
	do { //pengulangan untuk variabel curah hujan
		printf("\nTentukan curah hujan <40-100 mm>    : ");
		scanf("%d",&curah);
	} while (curah<40 || curah>100);
	do { //pengulangan untuk variabel angin
		printf("\nTentukan kencang angin <11-22 knot> : ");
		scanf("%d",&angin);
	} while (angin<11 || angin>22);
	printf("\nTentukan luas area <ubin>           : ");
	scanf("%d",&ubin);
	system("cls");
	cetakhujan(); //pemanggilan prosedur cetakhujan
	printf("\n");
	for (a=1;a<80;a++) //pengulangan for untuk mencetak tanah sebagai -
	{printf("-");}
	printf("\n");
	system("pause");
}
