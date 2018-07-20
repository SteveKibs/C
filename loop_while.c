/*illustration of thhw while statement*/
#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0;
	int n=1;
	while(n<=10)
	{
		sum=sum+n*n;
		n=n+1;
	}
	printf("Sum=%d\n",sum);
	getch();
}
