#include<iostream>
using namespace std;
struct Node {
    public:
    int data ;
    Node * prev;
    Node * next;

    Node (int d){
        this -> data = d;
        this -> prev = NULL;
        this ->next = NULL;
    }
};
void  print (Node* head){
    Node * temp = head;
    while(temp != NULL){
     cout << temp -> data;
     temp = temp -> next;
     cout<<" ";
    }
    cout <<endl;
}
int getlenth (Node* head){
    int len =0 ;
    Node* temp = head;
    while(temp != NULL){
        len ++;
        temp = temp -> next ;
    }
    return len;
}
void insertionAthead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;

}
void insertionAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertionAtposition (Node* &head, Node* &tail, int position , int d){
    if (position == 1){
        insertionAthead(head , d);
        return ;
    }
    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++ ;
    }
    if(temp -> next == NULL){
        insertionAttail(tail , d);
        return ;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp ->next;
    temp ->next -> prev = nodetoinsert;
    temp ->next = nodetoinsert;
    nodetoinsert -> prev = temp;
    
}
int main(){
    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    print(head);
    cout << getlenth(head)<<endl;

    insertionAthead(head, 11);
    print(head);
    insertionAthead(head, 12);
    print(head);
    insertionAthead(head, 13);
    print(head);
    insertionAttail(tail , 15);
    print(head);
    insertionAttail(tail , 16);
    print(head);
    insertionAttail(tail , 17);
    print(head);
  insertionAtposition(head, tail, 1, 102);
  print(head);
  insertionAtposition(head, tail, 2, 103);
  print(head);
  insertionAtposition(head, tail, 8, 105);
  print(head);
    return 0;
}