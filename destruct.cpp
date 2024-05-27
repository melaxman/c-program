/*destructor*/
#include<iostream>
using namespace std;
class Car
{
    static int count;
    public:
    Car()
    {
        count++;
        cout<<"there are"<<count<<"number of car"<<endl;

    }
    ~Car()
    {
        count--;
        cout<<"there are"<<count<<"number ofcars"<<endl;

    }

};
int Car::count;
int main()
{
    cout<<"we are in block1"<<endl;
    Car c1,c2,c3,c4;
    {
         cout<<"we are in block2"<<endl;
         Car c5;
    }
    {
         cout<<"we are in block3"<<endl;
         Car c6;

    }
     cout<<"we are re-entered main"<<endl;
}