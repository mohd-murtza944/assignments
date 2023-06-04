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

    void insert(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
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

    void deleteNode(int position) {
        if (head == nullptr) {
            std::cout << "List is empty. No node to delete." << std::endl;
            return;
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        int count = 1;

        while (curr != nullptr && count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr == nullptr) {
            std::cout << "Invalid position." << std::endl;
            return;
        }

        prev->next = curr->next;
        delete curr;
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    std::cout << "Initial list: ";
    list.display(); 

    list.deleteNode(2);

    std::cout << "List after deletion: ";
    list.display();

    return 0;
}
