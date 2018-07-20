#include<stdio.h>
#include<conio.h>
#define N 100
#define A 2
main()
{
	int a,b,c,w,y,z;
	a=9;
	b=12;
	c=3;
	w=a-b/3+c*2-1;
	y=a-b/(3+c)*(2-1);
z=a-(b/(3+c)*2)-1;
printf("w=%f\n",w);
printf("y=%f\n",y);
printf("z=%f\n",z);
getch();
}