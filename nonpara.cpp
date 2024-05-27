/*nopara*/
#include<iostream>
using namespace std;
class Rollcode
{
    int id;
    public:
    Rollcode()
    {
        id=0;
    }
    Rollcode(Rollcode &r)
    {
        id=r.id;
    }
    int getid()
    {
        return 0;
    }
};
int main()
{
    Rollcode r1;
    Rollcode r2(r1);
    Rollcode r3=r1;
    cout<<"id"<<r1.getid()<<endl;
    cout<<"id"<<r2.getid()<<endl;
    cout<<"id"<<r3.getid()<<endl;
    
    
}