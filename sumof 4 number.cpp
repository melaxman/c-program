#include<iostream>
using namespace std;

int sum(int,int,int,int);

int main()
{
	int a,b,c,d;
	cout<<"enter four number:"<<endl;
	cin>>a>>b>>c>>d;
	cout<<"the sum of "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<" is "<<sum(a,b,c,d);
	return 0;	
}
sum(int w,int x,int y,int z)
{
	return w+x+y+z;
}
