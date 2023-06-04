#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    a = 10;
    b = 5;
    cout<<"before swaping values of a, b "<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
     
     temp=a;
     a=b;
     b=temp;

     cout<<"values of a,b after swaping is "<<endl;
     cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;



    return 0;
}