#include<iostream>
#include<string.h>
using namespace std;
class player {
    private:
    int age ;
    char name[40],team[40];
    public:
    player(){
        cout<<"Enter player name :";
        cin.getline(name ,40);
        cout<<"Enter player team:";
        cin.getline(team,40);
        cout<<"Enter player age :";
        cin>>age;
    }
    void input(){
        cout<<"Enter player name :";
        cin>>name;
        cout<<"Enter player team:";
        cin>>team;
        cout<<"Enter player age :";
        cin>>age;

    }
    void display(){
        cout<<"player name is :"<<name<<endl;
        cout<<"team name is :"<<team<<endl;
        cout<<"player age is :"<<age<<endl;
        
    }
    void change(char n[40], char t[40], int a){
        strcpy(name , n);
        strcpy(team,t);
        age = a;
    }
};
int main (){
    int choice ;
    player p;
    do{
        cout<<"..........main menu .........."<<endl;
        cout<<"1:- Input Player Data "<<endl;
        cout<<"2:- Display Player Data "<<endl;
        cout<<"3:- Change Player Data "<<endl;
        cout<<"4:- Exit "<<endl;
        cout<<"Enter any choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
        p.input();
            break;
        case 2:
        p.display();
            break;
        case 3:
        p.change("shahid","India",40);
           break;
        case 4:
        exit(1);
            break;
        default:
        cout<<"you have entered an invalid number "<<endl;
            break;
        }

    } while(1);
    return 0;
}