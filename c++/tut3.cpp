#include <iostream>
#include <string.h>
using namespace std;
class stringcompare
{
private:
    char s[50];

public:
    stringcompare()
    {
        s[0] = '/0';
    }
    void input()
    {
        cout << "Enter any string :";
        cin >> s;
    }
    void operator==(stringcompare s1)
    {
        if (strlen(s) == strlen(s1.s))
        {
            cout << "strings are equal in length";
        }
        else
        {
            cout << "\n strings are not equal in length ";
        }
    }
};
int main()
{
    stringcompare s1, s2;
    s1.input();
    s2.input();
    s1 == s2;
    cout<<"\n My name is Mohd Murtza CHoudhary";
}