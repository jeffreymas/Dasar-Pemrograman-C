#include <stdio.h>
main()
{
	double beli, diskon, bayar;
	printf("Jumlah pembelian = Rp. ");
	scanf("%lf",&beli);
	if (beli >= 100000)
		diskon = 10000;
	else
		diskon = 0;
	bayar = beli - diskon;
	printf("Jumlah pembelian = Rp. %.21f\n",beli);
	printf("Besar diskon     = Rp. %.21f\n",diskon);
	printf("Total pembayaran = Rp. %.21f\n",bayar);
	return(0);
}