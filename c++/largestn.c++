#include<iostream>
using namespace std;

int main(){
    int n1,n2, max;
    cout<<"number one is :";
    cin>>n1;
    cout<<"number two is :";
    cin>>n2;
    max = (n1>n2)? n1:n2;

    cout<<"maximum number between"<<" "<<n1 <<" "<<"and"<<" "<<n2<<" "<<"is"<<" "<<max<<endl;

    return 0;
}