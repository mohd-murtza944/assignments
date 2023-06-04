#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int data, int position) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;

        if (position == 1) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 1; i < position - 1 && temp != nullptr; i++) {
                temp = temp->next;
            }

            if (temp == nullptr) {
                std::cout << "Invalid position." << std::endl;
                return;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;

    list.insert(10, 1); 
    list.insert(20, 2); 
    list.insert(30, 2); 
    list.insert(40, 4); 

    list.display(); 

    return 0;
}
