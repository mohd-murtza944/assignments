#include<iostream>
using namespace std;

int main(){
    int a, b, temp;

    cout<<"before swaping values of a, b "<<endl;
    cout<<"a=";
       cin>>a;
    cout<<"b=";
    cin>>b;
     
     temp=a;
     a=b;
     b=temp;

     cout<<"values of a,b after swaping is "<<endl;
     cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;



    return 0;
}