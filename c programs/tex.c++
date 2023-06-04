#include<iostream>
using namespace std;

int main(){
   int a = 5, b = 10;
   cout<<"numbers before swaping :"<<endl;
   cout<<"a = "<< a << " b ="<< b <<endl;
    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"numbers after swaping :"<<endl;
    cout<<"a = "<< a << " b ="<< b <<endl;

   
   
    return 0;
}