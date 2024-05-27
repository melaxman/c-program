/*parameterized*/
#include<iostream>
using  namespace std;
class Polar
{
    double r;
    double a;
    public:
    Polar()
    {
        r=0.0;
        a=0.0;
    }
    Polar(double r,double a)
    {
        r=r;
        a=a;

    }
    void display(){
        cout<<"rad="<<r<<"and a="<<a<<endl;
    }

};
int main()
{
    Polar pol(10.00,0.75);
    Polar poll;
    pol.display();
    poll.display();
}