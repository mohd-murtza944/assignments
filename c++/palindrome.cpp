#include <iostream>
#include <string>
using namespace std;

string isPalindrome(string S)
{
   for (int i = 0; i <S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
string S ;
cout<<"\n Enter the string name :";
cin>>S;
cout<<isPalindrome(S);
cout<<" \n\tMy Name is Murtza Choudhary ";
return 0;
}