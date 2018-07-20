#include<stdio.h>
#include<conio.h>
int mul(int a, int b);
int main()
{
	
	int a,b,c;
	a=5;
	b=10;
	c=mul(a,b);
	printf("The product of %d and %d is %d", a,b,c);
	getch();
}
int mul(int x,int y);

{
	int p=x*y;
	return(p);
}
