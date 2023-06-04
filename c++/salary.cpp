#include<iostream>
using namespace std;

int main(){
     int salary;
     float HRA,DA;
     cout<<"salary of a perosn:";
     cin>>salary;

    if (salary<1500){
    HRA = 0.1*salary;
    DA= 0.9*salary;
    cout<<"HRA:"<<  HRA  <<"  DA:"<< DA;
    }
    else if (salary>=1500)
    {
    HRA= 500;
    DA=0.98*salary;
    cout<<"HRA:"<<HRA<<"DA:"<<DA;
    }
    


    return 0;
}
