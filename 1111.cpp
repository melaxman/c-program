#include<iostream>

using namespace std;

class Oddeven
{
	int a;

public:
	void getdata();
	void putdata();
};
void Oddeven::getdata()
{
  cout<<"/n enter number to check:";
	cin>>a;
}
void Oddeven :: putdata()
{
	if (a%2==0)
	cout<<"/n even";
	  else
	  cout<<"/n odd";
}
int main()
{
Oddeven obj1;
obj1.getdata();
obj1.putdata();

return 0;                                                                                               
}