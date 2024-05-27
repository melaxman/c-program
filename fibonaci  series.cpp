#include<iostream>
using namespace std;
int fibo(int);
int main()
{
	int n;
	cout<<"tenter the  number:"<<endl;
	cin>>n;
	int i=0;
	while(i<n)
	{	
	cout<<" "<<fibo(i);
	i++;
	}
}
fibo(int x)
{	
	if(x>1)
	{
		return fibo(x-1)+fibo(x-2);
}
	else
	{
		return x;
	}
}
	


