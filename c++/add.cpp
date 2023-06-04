#include<iostream>
using namespace std;

int main() {
     int a, b ;
     cout<<" enter the value of a :"<<endl;
     cin>>a;
     cout<<" enter the value of b :"<<endl;
     cin>>b;
     
     a = a+b;
     b = a-b;
     a = a-b;
    cout<<"vlaues after swaping :"<< endl ;
    cout<< "a=" << a  <<endl <<  "b=" << b  <<endl;



    return 0;

}
