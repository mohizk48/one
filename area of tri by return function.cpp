#include <iostream>
using namespace std;
float area(int b , int h);
int main()
{
	int base,height;
	cout<<"enter the base"<<endl;
	cin>>base;
	cout<<"enter height"<<endl;
	cin>>height;
	area(base, height);
	int ar=	area(base, height);
	cout<<"area of triangle is= "<<ar<<endl;
}

float area(int b, int h)
{
	float a;
	a=0.5*b*h;
	return a;
}

