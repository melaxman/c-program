#include<iostream>
using namespace std;
void add(double a,double b,double c=0,double d=0,double e=0)
{
	cout<<"sum is"<<a+b+c+d+e;
}
void add(double a,double b,double c,double d=0,double e=0)
{
	double z=a+b+c+d+e;
	cout<<"sum is"<<z;
}
void add(double a,double b,double c,double d,double e=0)
{
	cout<<"sum is"<<a+b+c+d+e;
}
void add(double a,double b,double c,double d,double e)
{
	cout<<"sum is"<<a+b+c+d+e;
}
int main()
{
	int  a,b,c,d,e;
	cout<<"enter he  number:"<<endl;
	cin>>a>>b>>c>>d>>e;
	add(a,b,c,d,e);
}
