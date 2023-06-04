#include<iostream>
using namespace std;
class physics {
    public:
    virtual void example()=0;
};
class C: public physics{
    public:
    void example(){
        cout<<"C text book written by sd sharma\n ";
    }
};
class physics1 : public physics{
    public:
    void example(){
        cout<<"\nphysics1  text book written by sd sharma ";
    }
};
int main (){
    physics* arra[2];
C e1;
physics1 e2;
arra[0] = &e1;
arra[1]=& e2;
arra[0]->example();
arra[1]->example();
cout<<"\n  My Name is Mohd Murtza Choudhary ";
return 0;
}