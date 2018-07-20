#include<stdio.h>
#include<iostream.h>
void main()
{
	int a,b,c;
	int largest;
	cout<<"Enter 3 numbers";
	cin>>a;
	cout<<"\n";
	cin>>b;
	//cout<<"\n";
	cin>>c;
	
	if(a>b)
	{
		largest=a;
	}
	else
	{
		largest=b;

	}
	if(c>largest)
	{
		//cout<<"\n";
		largest=c;
		cout<<largest;
	}
}