#include <stdio.h>
int main()
{
	int numbers[10];
	int count = 10;
	int i;
	long sum = 1;
	float average = 0.0;
	printf("\nMasukkan 10 bilangan:\n");
	for(i = 0; i<count; i++)
	{
		printf("Data ke - %2d> ", i+1);
		scanf("%d",&numbers[i]);
	    sum += numbers[i];
    }
	average = (float)sum/count;
	printf("\n Nilai rata-ratanya adalah: %f\n", average);
	return (0);
}
