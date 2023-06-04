#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertBetween(int data, int position) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        int count = 1;

        while (temp != nullptr && count < position) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr) {
            std::cout << "Invalid position. The list has fewer elements." << std::endl;
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        
        temp->next = newNode;
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
    DoublyLinkedList list;

    list.insertBetween(20, 2); 
    list.insertBetween(10, 1); 
    list.insertBetween(30, 2); 
    list.display(); 

    return 0;
}
