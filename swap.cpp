#include<iostream>
using namespace std;
int swapReference(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
	return a;
}
int main()
{
	int x=4,y=5;
	cout<<"the value of x is"<<x<<"and the value of y is"<<y<<endl;
	swapReference(x,y);
	cout<<"the value of x is"<<x<<"and the value of y is"<<y<<endl;
}

