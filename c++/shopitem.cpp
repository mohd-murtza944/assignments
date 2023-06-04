#include<iostream>
using namespace std;
class shopitem{
    private :
    int id ;
    float price ;
    public :
    void setdata(int a , float b){
      id = a;
      price = b;
    }
    void getdata(){
        cout<<"code of this item is :"<<id<<endl;
        cout<<"price of this item is :"<<price<<endl;
    }
};
int main (){
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p,i;
    float q;
    for ( i=0; i<size ; i++){
        cout<<"Enter id and price of item "<<i+1;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for( i= 0; i<size; i++ ){
        cout <<"id and price of items are "<<i+1;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}