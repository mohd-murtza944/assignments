#include <iostream>
using namespace std;
int main() {
char character;
cout<<"Enter a character =  ";
cin>>character;
int storeAscii=character;
cout<<"The ASCII value  of "<<character<<
" is "<<storeAscii; 
if (storeAscii>=65 && storeAscii<=90) {
cout<<"\nYou have entered a capital letter";
} else if (storeAscii>=97 && storeAscii<=122) {
cout<<"\nYou have entered a small letter";
} else if (storeAscii>=47 && storeAscii<=57) {
cout<<"\nYou have entered a digit ";
} else if (storeAscii>=0 && storeAscii<=47
|| storeAscii>=58 && storeAscii<=64
|| storeAscii>=91 && storeAscii<=96
|| storeAscii>=123 && storeAscii<=127) {
cout<<"\nYou have entered a special character"<<endl;

}
cout<<"\n My Name is Mohd Murtza Choudhary"<<endl;


return 0;
}