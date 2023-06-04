#include<iostream>
using namespace std;
class BOOK
{
	int BOOKNO;
	char BOOKTITLE[20];
	float PRICE;
	void TOTAL_COST(int N)
	{
		float tcost;
		tcost=PRICE*N;
		cout<<tcost;
	}
public:
	void INPUT()
	{
		cout<<"Enter Book Number : ";
		cin>>BOOKNO;
		cout<<"\nEnter Book Title : ";
		cin>>BOOKTITLE;
		cout<<"\nEnter price per copy : ";
		cin>>PRICE;
	}
 
	void PURCHASE()
	{
		int n;
		cout<<"Enter number of copies to purchase ";
		cin>>n;
		cout<<"Total cost is ";
		TOTAL_COST(n);
	}
};
 
int main()
{
	BOOK obj;
	obj.INPUT();
	obj.PURCHASE();
    cout<<"\n My Name is Mohd Murtza Choudhary";
	return 0;
}
