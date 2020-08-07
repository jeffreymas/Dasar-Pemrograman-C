#include <stdio.h>

int tampil(const char *);
main()
{
	char string[80];
	printf("Ketiklah Kata : ");
	scanf("%s", string);
	printf("%d\n", tampil(string));
}

int tampil(const char *s)
{
	int x = 0;
	for ( ; *s != '\0' ; s++)
		++x;
	return(x);
}