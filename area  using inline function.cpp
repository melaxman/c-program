#include<iostream>
using namespace std;
inline float area(int r)
{
	return 2*3.14*r*r;
}
int main()
{
	int x;
	cout<<"enter the radius"<<endl;
	cin>>x;
	cout<<"the area is "<<area(x);
	return 0;
}
