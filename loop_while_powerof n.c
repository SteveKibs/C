/*program to compute x to the power of n using while loop*/
#include<stdio.h>
#include<conio.h>
main()
{
	int count n;
	float x,y;
	printf("Enter the values for x and b");
	scanf("%f%d",&x,&n);
	y=1;
	count=1;
	while(count<=n)
	{
		y=y*x;
		count++;
	}
	printf("\nx=%f;n=%d;x to power n=%f\n",x,n,y);
	getch();
}
