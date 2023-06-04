#include <iostream>
using namespace std ;

int findmaximum(int a[], int n)
{
   int mx = a[0];
     for (int i = 0; i < n; i++) {
        mx= max(mx,a[i]);
     }
     return mx;
}

int findminimum(int a[], int n)
{
  int mn = a[0];
    for (int i = 0; i < n; i++) {
        mn = min(mn, a[i]);
    }
return mn;
}

int main(){
    cout<<"My Name is Mohd Murtza Choudhary";
    int n;
    cout<<"\n\tenter the size of array :";
    cin>>n;
    int arr[n], i ;
    cout<<"\n\t Enter the elements  of the array : ";
    for(i=0;i<n;i++) 
    {
      cin>>arr[i];
    }
    cout<<"Elements of array are :"<<endl;
     for(i=0;i<n;i++) {
    cout<<arr[i]<< " ";
     }
    int mn = findminimum(arr,n);
    int mx= findmaximum(arr,n);

cout<<"\n\t The smallest element of entered array is  : "<< mn;
cout<<"\n\t The largest element of enetered array is : "<< mx;

    return 0;
}