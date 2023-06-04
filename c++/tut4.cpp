#include<iostream>
using namespace std;
class FLOAT{
    int real;
    float imag;
    public:
    FLOAT(){
        real= 0;
        imag=0;
    }
    FLOAT(int r, float i){
        real = r;
        imag = i;
    }
    void display(){
        cout<<real<<endl<<imag<<endl;
    }
    FLOAT operator + (FLOAT f){
        FLOAT temp;
        temp.real = real + f.real;
        temp. imag = imag + f.imag;
        return temp;
    }
    FLOAT operator -(FLOAT f);
    FLOAT operator /(FLOAT f);
    FLOAT operator *(FLOAT f);
};
FLOAT FLOAT :: operator-(FLOAT f){
    FLOAT temp;
        temp.real = real - f.real;
        temp. imag = imag - f.imag;
        return temp;
}
FLOAT FLOAT :: operator/(FLOAT f){
    FLOAT temp;
        temp.real = real / f.real;
        temp. imag = imag / f.imag;
        return temp;
}
FLOAT FLOAT :: operator*(FLOAT f){
    FLOAT temp;
        temp.real = real * f.real;
        temp. imag = imag * f.imag;
        return temp;
}
int main(){
    FLOAT c1(10,20.0), c2(20,30.0);
    FLOAT c3 = c1 + c2;
    FLOAT c4 = c2 -c1;
    FLOAT c5 = c2/c1;
    FLOAT c6 = c1*c2;
    c3.display();
    c4.display();
    c5.display();
    c6.display();
    return 0 ;
}