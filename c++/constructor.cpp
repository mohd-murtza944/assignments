#include <iostream>
using namespace std;
 
class student {
    int rno;
    char name[10];
    double fee;
 
public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }
 
    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};
 
int main()
{
    student s; 
    s.display();
 cout<<"\n\t My Name is Murtza Choudhary ";
    return 0;
}