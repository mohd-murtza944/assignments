#include<iostream>
using namespace std;
class base {
    public:
    void display(){
        cout<<"\n display base ";
    }
    virtual void show (){
        cout<<"\n show base ";
    }
};
class derived : public base {
    public :
    void display (){
        cout<<"\n display derived ";
    }
    void show (){
        cout<<"\n show derived ";
    }
};
int main (){
    base B ;
    derived d;
    base *bptr;
    cout <<"\n bptr points to base \n";
    bptr =&B;
    bptr -> display();
    bptr-> show();
    cout<<"\n\n bptr points to derived \n";
    bptr=&d;
    bptr -> display();
    bptr -> show();
    cout<<"\n My Name is Mohd Murtza CHoudhary";
    return 0;
}