#include <stdio.h>
int main()
{
	int n=0;

	while (n <= 0){
		printf("Masukkan nilai N > 0 : ");
		scanf("%d",&n);
	}
	for(n;n>0;n){
		printf("\nAnak Ayam Turun %d \n",n);
		if (n==1)
		break;
		else
			n = n-1;
			printf("Mati satu tinggal %d \n",n);
	}
	printf("Mati satu tinggal induknya\n");
}
