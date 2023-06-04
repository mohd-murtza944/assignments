#include<iostream>
using namespace std;

int main(){
int amount , rupees_500, rupees_100, rupees_50,rupees_20,rupees_10,rupees_5,rupees_1;
cout<<"Enter Amount :- ";
cin>>amount;
rupees_500 = amount/500;
amount = amount%500;
rupees_100 = amount/100;
amount = amount % 100;
rupees_50 = amount/50;
amount = amount %50;
rupees_20 = amount/20;
amount = amount%20;
rupees_10 = amount / 10;
amount = amount % 10;
rupees_5 = amount /5;
amount = amount % 5;
rupees_1 = amount;

cout <<"No. of Rs 500 notes :- "<<rupees_500<<" \n No. of Rs 100 notes :- "<<rupees_100
<<"\n No. of RS 50 notes :-"<<rupees_50<<"\n No. of Rs 20 notes :-"<<rupees_20<<"\n No. of Rs 10 notes :-"<<rupees_10
<<"\n No. of Rs 1 notes :-"<<rupees_1;
cout<<"\n My Name is Mohd Murtza Choudhary ";
return 0;
}