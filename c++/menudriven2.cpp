#include<iostream>
#include<array>
using namespace std;
class menu{
    private:
    int m,n, arr[][20];
    public:
    void input (int arr[][20],int m, int n){
        for(int i=0; i<m; i++){
            for(int j=0; j<n;j++){
                cout<<"Enter the elements of Matrix :";
                cin>>arr[i][j];
            }
        }
    }
     void display (int arr[][20], int m, int n){
        cout<<"The Matrix is : \n";
            for(int i=0; i<m;i++){
                 for(int j=0; j<n; j++){
                      cout<<arr[i][j]<<" ";
                    }
                cout<<"\n";
           }
     }
     void sum(int arr[][20],int m, int n){
        int sum = 0;
         for(int i=0; i<m;i++){
                 for(int j=0; j<n; j++){
                      sum = sum + arr[i][j];
                    }
         }
         cout<<"\n Sum of matrix is :- "<<sum<<endl;
     }
     void rowsum(int arr[][20] , int m, int n){
        int rsum = 0;
        for(int i=0; i<m;i++){
                 for(int j=0; j<n; j++){
                      rsum = rsum + arr[i][j];
                    }
         }
         cout<<"\n ROW WISE Sum of matrix is :- "<<rsum<<endl;
     }
     void colsum(int arr[][20], int m, int n){
        int clsum= 0;
        for(int i=0; i<m;i++){
                 for(int j=0; j<n; j++){
                      clsum = clsum + arr[i][j];
                    }
         }
         cout<<"\n COLUMN WISE Sum of matrix is :- "<<clsum<<endl;
     }
     void tranpose(int arr[][20], int b[][20], int m, int n){
         for(int i=0; i<m;i++){
                 for(int j=0; j<n; j++){
                    b[i][j] = arr[j][i];
                 }
         }
                 for(int i=0; i<m;i++){
                      for(int j=0; j<n; j++){
                          cout<<b[i][j]<<" ";
                    }
                   cout<<"\n";
         }
     }
};
int main(){
    int choice ,a ,b, A[10][20],B[10][20];
    cout<<"Enter the Row number :";
    cin>>a;
    cout<<"\nEnter the column :";
    cin>>b;
    menu p;
    do{
        cout<<"........Main Menu.........."<<endl;
        cout<<"1:- Input Menu data "<<endl;
        cout<<"2:- display Menu data "<<endl;
        cout<<"3:- sum of matrix :"<<endl;
        cout<<"4:- row wise sum of matrix :"<<endl;
        cout<<"5:- column wise sum of matrix :"<<endl;
        cout<<"6:- Transpose of matrix :"<<endl;
        cout<<"7:- Exit :"<<endl;
        cout<<"Enter any choice :-\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
        p.input( A, a,b);
            break;
        case 2:
        p.display(A,a,b);
            break;    
        case 3:
        p.sum(A,a,b);
            break;
        case 4:
        p.rowsum(A,a,b);
            break;
        case 5:
        p.colsum(A,a,b);
            break;
        case 6:
        p.tranpose(A,B,a,b);
            break;
        case 7:
        exit(1);
            break;
        default:
        cout<<"\n you have entered an invalid number \n";
            break;
        }

    }while(1);
    return 0;
}