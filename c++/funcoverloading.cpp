#include <iostream>
using namespace std;

class FLOAT {
    float number;
    public: 

FLOAT (){
number =0;
}
FLOAT(float t){
    number = t;
}
FLOAT operator + (FLOAT obj2) {
    FLOAT temp ; 
    temp.number = number + obj2.number ;
    return(temp);
}
FLOAT operator - ( FLOAT obj2){
FLOAT temp;
temp.number = number - obj2.number; 
return (temp);
}
FLOAT operator * (FLOAT obj2) {
    FLOAT temp ; 
    temp.number = number * obj2.number ;
    return(temp);
}
FLOAT operator / (FLOAT obj2) {
    FLOAT temp ; 
    temp.number = number / obj2.number ;
    return(temp);
}
void display (){
    cout<<number;
}
};
int main(){
FLOAT A(30.2f), B(20.2f),C(0.0f);
cout<<"A is :"; A.display();
cout<<"\t B is :"; B.display();
C=A+B;
cout<<"\n\t The result of A+B is :"; 
C.display();
C=A*B;
cout<<"\n\t The result of A*B is :";
C.display();
C=A/B;
cout<<"\n\t The result of A/B is :";
C.display();
cout<<"\n\t My Name is Murtza Choudhary";

    return 0;
}