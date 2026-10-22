#include <iostream>
using namespace std;
struct SNode {
    int data;
    SNode* next;
    SNode(int val) : data(val), next(nullptr) {}
};
class SinglyLinkedList {
private:
    SNode* head;
public:
    // Độ phức tạp: O(1)
    SinglyLinkedList() : head(nullptr) {}
    // Độ phức tạp: O(N) 
    ~SinglyLinkedList() {
        SNode* current = head;
        while (current) {
            SNode* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
    // Độ phức tạp: O(N) 
    void append(int data) {
        SNode* newNode = new SNode(data);
        if (!head) {
            head = newNode;
            return;
        }
        SNode* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Độ phức tạp: O(1)
    void prepend(int data) {
        SNode* newNode = new SNode(data);
        newNode->next = head;
        head = newNode;
    }

    // Độ phức tạp: O(N) 
    void remove(int key) {
        if (!head) return;
        if (head->data == key) {
            SNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        SNode* current = head;
        while (current->next && current->next->data != key) {
            current = current->next;
        }
        if (current->next) {
            SNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    // Độ phức tạp: O(N)
    void display() const {
        SNode* current = head;
        while (current) {
            cout << current->data << (current->next ? " -> " : "");
            current = current->next;
        }
        cout << endl;
    }
};
