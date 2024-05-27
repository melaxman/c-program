#include<iostream>
using namespace std;
void si(int, int,float=8.5);
int main()
{
	int p,t,ch;
	float r;
	cout<<"abd";
	cin>>p>>t>>r;
	cin>>ch;
	cout<<"1,,,no change"<<endl;
	cout<<"2,,, change"<<endl;
	switch(ch)
	{
	 case 1:
	 	si(p,t,r);
	 	break;
	 	
	  case 2:
	  si(p,t);
	  break;
	  
	  default:
	  	cout<<"invalid";
	  	break;
	}
	
	
}
void si(int a, int b, float c)
{
cout<<(float)(a*b*c)/100;
}
