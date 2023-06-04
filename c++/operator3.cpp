#include<iostream>
using namespace std;
int main (){
int i= 0;
while(i<=50){
    if (i%3==0){
        continue ;
}
    i++;
}
cout<<i<<endl;
return 0;
}