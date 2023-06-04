#include<iostream>
using namespace std;

int main(){
int n,m ;
cout<<"Enter the values of row and coloumn: ";
cin>>n>>m;
int arr[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<"Enter the elements of matrix:";
        cin>>arr[i][j];
    }
}
cout<<"The Matrix is : \n";
for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
int x;
cout<<"Enter the element which you want to find : ";
cin>>x;
bool flag = false;
for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
        if(arr[i][j]==x){
            cout<<i<<" "<<j<<"\n";
            flag = true;
        }
    }
    if(flag){
        cout<<"Element is found \n";
    }
    else{
        cout<<"Element is not found \n";
    }
}
    return 0;
}