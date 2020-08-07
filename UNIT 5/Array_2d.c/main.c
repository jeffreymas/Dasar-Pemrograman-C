#include <stdio.h>
int array[4][3];
int main()
{
	int x,y;
	array[0][0] = 1;
	array[0][1] = 2;
	array[1][0] = 3;
	array[1][1] = 4;
	array[2][0] = 5;
	array[2][1] = 6;
	printf("array[%d] ",0);
	printf("%d", array[0][0]);
	printf("%d", array[0][1]);
	printf("\n");
	printf("array[%d] ",1);
	printf("%d", array[1][0]);
	printf("%d", array[1][1]);
	printf("\n");
	printf("array[%d] ",2);
	printf("%d", array[2][0]);
	printf("%d", array[2][1]);
	printf("\n");
	return(0);
}