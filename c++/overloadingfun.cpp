#include<iostream>
using namespace std;
inline float add(int a ,int b,double c){
    return (a+b+c);
}
void add(int a, int b, int c){
 
    int discriminant = (b*b) - (4*a*c);
    if(discriminant > 0){
        cout<<"Discriminant is "<<discriminant
            <<" which is Positive"<<endl;
             
        cout<<"Hence Two Solutions";
    }
    else if(discriminant == 0){
        cout<<"Discriminant is "<<discriminant
            <<" which is Zero"<<endl;
             
        cout<<"Hence One Solution";
    }
    else if(discriminant < 0){
        cout<<"Discriminant is "<<discriminant
            <<" which is Negative"<<endl;
             
        cout<<"Hence No Real Solutions";
    }
}
inline float add (float r)
{
    double  pi = 3.14;
    return (pi * r * r);
}
int main(){
cout<<"calling the sum funtion for computing sum of three digits :"<<add(1,2,3.0);
cout<<"\n calling the discriminant fuction :\n ";
add(5,6,7);
cout<<"\ncalling the area of circle fuction:\n "<<add(2.2);
return 0;
}
