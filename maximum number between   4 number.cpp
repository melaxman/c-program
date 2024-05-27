#include<iostream>
using namespace std;
int maximum(int,int,int,int);
int main()
{
	int a,b,c,d;
	cout<<"enter four number"<<endl;
	cin>>a>>b>>c>>d;
	cout<<"the maximum number between "<<a<<","<<b<<","<<c<<","<<d<<" is "<<maximum(a,b,c,d);
	return 0;
}
int maximum(int w,int x,int y, int z)
{
	if(w>x&&w>y&&x>z)
	{
		return w;
	}
	else if(x>w&&x>y&&x>z)
	{
		return x;
	}
	else if(y>x&&y>w&&y>z)
	{
		return y;
	}
	else
	{
		return z;
		}	
}

