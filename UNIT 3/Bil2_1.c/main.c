#include <stdio.h>
main()
{
	int baris, kolom, hasil_tambah;
	for (baris = 1; baris <= 5; baris++)
	{
		if(baris>1&&baris<5)
			printf(" *       *");
		else
		for (kolom = 1; kolom <= 5; kolom++)
		{
		hasil_tambah = baris + kolom;
		printf(" *");
		}
	printf ("\n");
	}
return(0);
}
