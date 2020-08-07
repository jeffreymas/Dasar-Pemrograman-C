#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int x,cek,y,kode,posx,posy,n;
char floor[1][8][8];

void lvl(int n)
{
	if (n==0)
	{
	posx=4;
	posy=4;
	for(y=0;y<8;y++)
	{
		for(x=0;x<8;x++)
		{
		if((y==1)&&(x==3))
		floor[0][y][x]='o';
		else if((y==3)&&(x==6))
		floor[0][y][x]='o';
		else if((y==4)&&(x==1))
		floor[0][y][x]='o';
		else if((y==6)&&(x==4))
		floor[0][y][x]='o';
		else if((y==2)&&(x==3))
		floor[0][y][x]=' ';
		else if((y==3)&&(x==4))
		floor[0][y][x]=' ';
		else if((y==4)&&(x==2))
		floor[0][y][x]=' ';
		else if((y==3)&&(x==3))
		floor[0][y][x]='E';
		else if((y==3)&&(x==5))
		floor[0][y][x]='E';
		else if((y==4)&&(x==3))
		floor[0][y][x]='E';
		else if((y==5)&&(x==4))
		floor[0][y][x]='E';
		else if((y==4)&&(x==4))
		floor[0][y][x]='Y';
		else floor[0][y][x]='-';
		}
	}
	}
	else
	{
	posy=1;
	posx=3;
	for(y=0;y<8;y++)
	{
		for(x=0;x<8;x++)
		{
		if((y==2)&&(x==1))
		floor[1][y][x]='o';
		else if((y==3)&&(x==6))
		floor[1][y][x]='o';
		else if((y==6)&&(x==1))
		floor[1][y][x]='o';
		else if((y==1)&&(x==2))
		floor[1][y][x]=' ';
		else if((y==3)&&(x==2))
		floor[1][y][x]=' ';
		else if((y==3)&&(x==3))
		floor[1][y][x]=' ';
		else if((y==4)&&(x==2))
		floor[1][y][x]=' ';
		else if((y==4)&&(x==3))
		floor[1][y][x]=' ';
		else if((y==4)&&(x==5))
		floor[1][y][x]=' ';
		else if((y==4)&&(x==6))
		floor[1][y][x]=' ';
		else if((y==5)&&(x==2))
		floor[1][y][x]=' ';
		else if((y==5)&&(x==3))
		floor[1][y][x]=' ';
		else if((y==5)&&(x==4))
		floor[1][y][x]=' ';
		else if((y==5)&&(x==5))
		floor[1][y][x]=' ';
		else if((y==5)&&(x==6))
		floor[1][y][x]=' ';
		else if((y==6)&&(x==2))
		floor[1][y][x]=' ';
		else if((y==6)&&(x==3))
		floor[1][y][x]=' ';
		else if((y==6)&&(x==4))
		floor[1][y][x]=' ';
		else if((y==2)&&(x==2))
		floor[1][y][x]='E';
		else if((y==2)&&(x==3))
		floor[1][y][x]='E';
		else if((y==4)&&(x==4))
		floor[1][y][x]='E';
		else if((y==1)&&(x==3))
		floor[1][y][x]='Y';
		else floor[1][y][x]='-';
		}
	}
}
}

void cekmenang();

void cetaklantai()
{
	system("cls");
	cekmenang();
	printf("Level %d\n\n",n+1);
	for(y=0;y<8;y++)
	{
		for(x=0;x<8;x++)
		{
		printf("%c ",floor[n][y][x]);
		}
		printf("\n");
	}
}

void geserkiri(int oppy, int oppx)
{
	if (floor[n][oppy][oppx-1]==' ')
	{
		floor[n][oppy][oppx-1]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posx--;
	}
	else if ((floor[n][oppy][oppx-1]=='E')&&(floor[n][oppy][oppx-2]!='-'))
	{
		floor[n][oppy][oppx-2]=floor[n][oppy][oppx-1];
		floor[n][oppy][oppx-1]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posx--;
	}
}

void geseratas(int oppy, int oppx)
{
	if (floor[n][oppy-1][oppx]==' ')
	{
		floor[n][oppy-1][oppx]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posy--;
	}
	else if ((floor[n][oppy-1][oppx]=='E')&&(floor[n][oppy-2][oppx]!='-'))
	{
		floor[n][oppy-2][oppx]=floor[n][oppy-1][oppx];
		floor[n][oppy-1][oppx]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posy--;
	}
}

void geserkanan(int oppy, int oppx)
{
	if (floor[n][oppy][oppx+1]==' ')
	{
		floor[n][oppy][oppx+1]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posx++;
	}
	else if ((floor[n][oppy][oppx+1]=='E')&&(floor[n][oppy][oppx+2]!='-'))
	{
		floor[n][oppy][oppx+2]=floor[n][oppy][oppx+1];
		floor[n][oppy][oppx+1]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posx++;
	}
}

void geserbawah(int oppy, int oppx)
{
	if (floor[n][oppy+1][oppx]==' ')
	{
		floor[n][oppy+1][oppx]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posy++;
	}
	else if ((floor[n][oppy+1][oppx]=='E')&&(floor[n][oppy+2][oppx]!='-'))
	{
		floor[n][oppy+2][oppx]=floor[n][oppy+1][oppx];
		floor[n][oppy+1][oppx]=floor[n][oppy][oppx];
		floor[n][oppy][oppx]=' ';
		posy++;
	}
}

void kontroler()
	{
	char kode;
	cek=0;
	while(cek!=1)
	{
	cetaklantai();
	printf("\n");
	printf("Instruksi :\n");
	printf("Suruh Y untuk memindahkan 'E' ke dalam 'o' dengan mendorongnya,\n");
	printf("dengan kendali:\n");
	printf("-a = kiri\n");
	printf("-s = bawah\n");
	printf("-d = kanan\n");
	printf("-w = atas\n");
	printf("-u = ulangi level\n");
	kode=getch();
	
	switch(kode)
	{
	case 'a':
	geserkiri(posy,posx);
	cetaklantai();
	break;
	case 'd':
	geserkanan(posy,posx);
	cetaklantai();
	break;
	case 'w':
	geseratas(posy,posx);
	cetaklantai();
	break;
	case 's':
	geserbawah(posy,posx);
	cetaklantai();
	break;
	case 'u':
	lvl(n);
	}
	}
}
	
int main()
{
	lvl(n);
	kontroler();
	n=1;
	lvl(n);
	kontroler();
	exit;
	return(0);
}

void cekmenang()
{
	cek=1;
	for(y=0;y<8;y++)
	{
		for(x=0;x<8;x++)
		{
		if(floor[n][y][x]=='o')
		cek=0;
		}
	}
}
