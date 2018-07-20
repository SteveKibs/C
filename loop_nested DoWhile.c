/*program to print the multiplication table 1*1 to 12*12 using nested do..while loops*/
#include<stdio.h>
#include<conio.h>
#define COLMAX 10
#define ROWMAX 12
main()
{
int row,column,y;
row=1;
printf("MULTIPLICATION TABLE  \n");
printf("----------------\n");
do //outer loop begins
{
	column=1;
	do //outer loop begins
	{
		y=row*column;
		printf("%4d",y);
column=column+1;
while(column<=COLMAX); //INNER LOOP ENDS
{
printf("\n");
row=row+1;

}
while(row<=ROWMAX);//outer loops ends
printf("-----------------\n");

getch();
	}