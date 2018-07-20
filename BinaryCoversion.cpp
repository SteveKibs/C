#include<iostream.h>
const int maxsize=50;
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
int stack::emptystack ()
{

return top==0;
}
int stack::fullstack ()
{
return	top=maxsize;
}
void stack::push (int item)
{
	top++;
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

	int n, btest;
	int remainder;
	cout<<"\nEnter a positive number";
	cin>>n;
	cout<<"\nEnter the Base to Convert to";
	cin>>btest;
	while(n>0)
	{
		remainder=n%btest;
		n=n/btest;
	}
	while(!s.emptystack())
	{
		s.pop(remainder);
		cout<<remainder<<" ";
	}
}