#include<iostream>
using namespace std;
class shape{
    public :
    shape(){}
    virtual void print (){
        cout<<"\n This is a shape ";
    }    
};
class polygon : public shape 
{
    public:
    polygon(){}
    void print (){
        cout <<"\n  polygon is a shape ";
    }
};
class rectangle : public polygon
{
    public :
    rectangle(){}
    void print (){
        cout<<"\n rectangle is a polygon ";
    }
};
class triangle : public polygon 
{
    public:
    triangle(){}
        void print (){
            cout<<"\n triangle is polygon";
        }
};
class square : public rectangle 
{
    public:
    square(){}
    void print (){
        cout<<"\n square is recatangle ";
    }
};
int main(){
    shape S;
    polygon P;
    rectangle R;
    triangle T;
    square Sq;
    S.print();
    P.print();
    R.print();
    T.print();
    Sq.print();
    cout<<"\n My Name is Mohd Murtza CHoudhary";
    return 0;
} 