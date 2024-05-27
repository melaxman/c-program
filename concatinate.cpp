#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char a[20];
    char b[20];

public:
    String()
    {
        strcpy(a, "");
        strcpy(b, "");
    }

    void input()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }

    String operator+()
    {
        String s;
        strcpy(s.a, a);
        strcat(s.a, b);
        strcpy(s.b, "");
        return s;
    }

    void display()
    {
        cout << "Concatenated string a: " << a << endl;
    }
};

int main()
{
    String s1;
    s1.input();
    String concatenated = +s1
    concatenated.display();

    return 0;
}
