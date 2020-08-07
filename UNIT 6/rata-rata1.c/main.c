#include <stdio.h>

main()
{
	char strg[40],*there,satu,dua;
	int *pt,list[100],index;
	strcpy(strg,"Ini Adalah String Yang Ditulis");
	satu = strg[0];
	dua = *strg;
	printf("Output Pertama Adalah %c %c\n",satu,dua);
	satu = strg[8];
	dua = *(strg+8);
	printf("Output Kedua Adalah %c %c\n",satu,dua);
	there = strg+5;
	printf("Output Ketiga Adalah % c\n",strg[11]);
	printf("Output Keempat Adalah %c\n",*there);
	gets(0);
	return(0);
}