#include<iostream>
using namespace std;
inline float volume(int,int);
int main()
{
    int r,h;
    cout<<"enter the radius';
    cin>>r;
    cout<<"height";
    cin>>h;
    cout<<"vomlume="<<volume(r,h);
    return 0;
}

float volume(int r,int h)
{
    return 3.14*r*r*h;
}