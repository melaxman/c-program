/*set and display*/
#include<iostream>
using namespace std;
class Student
{
    int roll;
    char name[];
    public:
    void setdata();
    void displaydata();

};
void Student::setdata()
{
    cout<<"enter the name and rollno"<<endl;
    cin>>roll>>name;

}
void Student::displaydata()
{
    cout<<roll<<name;
}
int main()
{
    Student s1 ,s2;
    s1.setdata();
    s2.setdata();
    s1.displaydata();
    s2.displaydata();
    return 0;
}
