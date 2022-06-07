#include<iostream>
using namespace std;
void initialize(int *&a, int *&b, int *&c)
{
	
	
	cout<<"Enter 3 integers:"<<endl;
	cin>>*a>>*b>>*c;
	
}
void median(int *a, int *b, int *c)
{
	int median=(*a+*b+*c)/3;
	cout<<"Median is :"<<median<<endl;
}
void main()
{
	int x,y,z;
	int *p,*q,*r;
	initialize(p,q,r);
	median(p,q,r);

	system("pause");
}