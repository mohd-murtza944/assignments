#include<iostream>
using namespace std;
class rectangle {
    private :
    int length ,breadth ;
    public:
    rectangle(){
        length = 0;
        breadth =0;
    }
    rectangle(int a, int b){
      length = a;
      breadth = b;
    }
    rectangle(int n){
        length =n;
        breadth =n;
    }
    inline void area(){
        cout<<" area of rectangle is :"<<(length*breadth)<<endl;
    }
};
int main (){
    rectangle r1, r2(2,3),r3(5);
    r1.area();
    r2.area();
    r3.area();
    cout<<"\n My name is Murtza Choudhary ";
    return 0;
}