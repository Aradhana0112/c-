#include<iostream>
#include<cmath>
using namespace std;

//calculating volume of rectangle
int volume(int length,int width,int height)
{
	return(length*width*height);
}

//calculating volume of cyclinder
int volume(double radius,int height){
	return(3.14*radius*radius*height);
}

//calculating volume of sqaure
int volume(int side)
{
	return(side*side);
	
}
int main()
{
	int length,width,height;
	
	cout<<"Enter length && width && height of rectangle"<<endl;
	cin>>length>>width>>height;
	cout<<"the volume of rectangle is:"<<endl;
	
	double radius;

	cout<<"Enter radius && height of cyclinder"<<endl;
	cin>>radius>>height;
	cout<<"the volume of cyclinder is:"<<endl;
	
	int side;
	cout<<"Enter side of square"<<endl;
	cin>>side;
	cout<<"the volume of square is:"<<endl;

}

