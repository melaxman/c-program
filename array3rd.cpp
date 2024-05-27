#include<iostream>
using namespace std;

class Student 
{
    private:
        char name[50];
 
    public:
        void setstudent();
        void displaystudent();
};

void Student::setstudent()
{
    cout<<"Enter name: ";
    cin>>name;
}

void Student::displaystudent()
{
    cout<<"\nName: "<<name;
}

int main()
{
    Student s[39];  // Create an array of Student objects
    int n;
    cout<<"Enter number: ";
    cin>>n;

    // Prompt the user to enter names for each student
    for(int i=0;i<=n-1;i++)
    {
        s[i].setstudent();
    }

    // Display the names of the students
    for(int i=0;i<=n-1;i++)
    {
        s[i].displaystudent();
    }

    return 0;
}
