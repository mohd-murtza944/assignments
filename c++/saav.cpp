#include<iostream>
using namespace std;

int main (){
int n,i;
float num[100], sum=0, average ;
cout<<"Enter the numbers of data:- ";
cin>>n;
while(n>100|| n<=0){
    cout<< "\n YOU HAVE ENTERED WRONG VALUE! ";
    cout<<"\n PLEASE ENTERED NUMBER AGAIN  :";
    cin>>n;
}
for(int i=0 ; i<n; i++){
cout <<i+1<< "   Enter number :";
cin>>num[i];
sum+=num[i];
}
average = sum/n;
cout<<"\nAverage of the numbers is :"<<average;
return 0;
}