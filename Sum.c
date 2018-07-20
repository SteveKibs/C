#include<stdio.h>
#include<conio.h>
#define N 5
main()
{
	int count;
	float sum, average,number;
	sum=0;
	count=0;
	while(count<N)
	{
		printf("Enter any Number");
		scanf("%d",&number);
		count=count+1;
		sum=sum+N;
	}
	average=sum/N;
	printf("N=%d sum=%f,N,sum");
	printf("Average=%d",average);
	getch();
}