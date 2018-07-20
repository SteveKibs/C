/*A stack array program to display user entered numbers in reverse order*/
#include<stdio.h>
#include<iostream.h>
const int maxsize=20;
class stack
{
	int top;
	int stackarray[maxsize];
public:
	stack();
	int emptystack();
	int fullstack();
	void push(int item);
	void pop(int&item);
};
stack::stack()
{
	top=0;
}

int stack::emptystack()
{
	return top==0;
}
int stack::fullstack()
{
	return top==maxsize;
}
void stack::push(int item)
{
	top ++;
stackarray[top]=item;
}
void stack::pop(int&item)
{
	item=stackarray[top];
	top--;
}
void main()
{
	stack s;
	int i,n,x;
	cout<<"\n How many DATA elements do you want to enter?";
	cin>>n;
	cout<<"\nEnter data elements now\n";
	for(i=1;i<n;i++)
	{
	cin>>x;
	s.push(x);
}
while(!s.emptystack())
{
	s.pop(x);
	cout<<x<<"\n";
}
}
