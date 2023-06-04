#include<iostream>
using namespace std;

int main(){
 int arr[100],n, temp, i,j;
 cout<<" Enter the number of elements  you want to insert into array : ";
 cin>>n;
 cout<<"\n Enter the elements of an array :";
 for(i=0; i<n; i++){
    cout <<"\n Enter element  "<<i+1<<":";
    cin>>arr[i];
 }
 for(i=0,j=n-1;i<n/2;i++,j--)
 {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
 }
 cout<<"\n Reverse Elements are :"<<endl;
 for (i=0; i<n; i++){
    cout<<arr[i]<<" ";
 }
 cout<<"\n My name is Mohd Murtza choudhary";

    return 0;
}