#include<iostream>
using namespace std;
class Student {
 char name[50];
 int roll;
 public:
 void setstudent();
 void displaystudent();
 };
  void Student::setstudent()
  {
    cout<<"enter name:";
    cin>>name;
    cout<<"roll:";
    cin>>roll;
  }
  void Student::displaystudent()
  {
    cout<<"\n name="<<name;
    cout<<"\n rolll no="<<roll;

  }



int main()
{
    Student s1, s2;
    s1.setstudent();
    s1.displaystudent();
    s2.setstudent();
    s2.displaystudent();
return 0;
}