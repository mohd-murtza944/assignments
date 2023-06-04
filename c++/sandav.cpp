#include <iostream>
#include <array>
using namespace std;
void sum(int* a, int length)
{
    int  sum_of_an_array =0;
    for(int i=0; i<= length; i++){
        sum_of_an_array += *(a+i);
  
    }
          cout<<"sum_of_an_array is :  "<< sum_of_an_array <<endl; 
}
double average (int* a, int n )
{
     int  sum_of_an_array =0;
     double avg;
    for(int i=0; i< n; i++){
        sum_of_an_array += *(a+i);
        }
    avg = double(sum_of_an_array )/n;
cout<<"average of the array is : "<< avg<<endl; 
cout<<"\n My Name is Murtza Choudhary "<< endl;
}
int main(){
    int a[4];
    cout<<" enter the values of an array "<<endl;
    for(int i=0; i<=4; i++)
    {
        cin>>a[i];
    }
         sum(a,4);
         average(a,5);
    return 0;
    }