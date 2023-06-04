#include <iostream>
using namespace std;

int main(){
    int z=1;
    int n;
    cin>>n;
for(int i=1;i<n;i++){
    for(int j=n; j>i;j--){
        cout<<" ";
    }
    cout<<i;
    
    if(i!=1)
    {
        for(int k=1; k<=z; k++){
            cout<<" ";
        }
        cout<<i;
        z+=2;
      
    }
    cout<<endl;

}
for( int i=1; i<=z+2; i++){
    cout<<n;
}
    return 0;
}