#include <iostream>
using namespace std; 
 class account 
 {
    float bal; 
public :
char name[50];
int acc ; 
char type[10];
void get()
{
cin>>bal>>name>>acc >>type;
}
void put()
{
 cout<<bal<<name<<acc <<type;   
}
float deposit(float f);
float withdraw(float f);
 };
 float account::deposit(float f)
 {
    bal = bal+f;
    return bal;
 } 
 float account::withdraw(float f)
 {
    bal = bal-f;
    return bal;
 }
 int main()
 {
    account a1;
    a1.get();
    float b = a1.withdraw(1000)
    cout<<a1.type;
 }

