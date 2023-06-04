#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(int(c)>=65 && int(c)<=90){
        cout<<"Capital Letter\n";
        cout<<int(c);
    }
    
    else if(int(c)>=97 && int(c)<=122){
        cout<<"Small Letter\n";
        cout<<int(c);
    }
    else if(int(c)>=48 && int(c)<=57){
        cout<<"Number\n";
        cout<<int(c);
    }
    else{
        cout<<"Special Symbol\n";
        cout<<int(c);
    }

}