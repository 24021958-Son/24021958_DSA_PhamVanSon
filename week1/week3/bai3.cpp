#include <iostream>
using namespace std;
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
    DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
class DoublyLinkedList {
private:
    DNode* head;
    DNode* tail;
public:
    // Độ phức tạp: O(1)
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    // Độ phức tạp: O(N) 
    ~DoublyLinkedList() {
        DNode* current = head;
        while (current) {
            DNode* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
    // Độ phức tạp: O(1) 
    void append(int data) {
        DNode* newNode = new DNode(data);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    // Độ phức tạp: O(1) 
    void prepend(int data) {
        DNode* newNode = new DNode(data);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    // Độ phức tạp: O(N) 
    void remove(int key) {
        DNode* current = head;
        while (current) {
            if (current->data == key) {
                if (current->prev) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }
                if (current->next) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
    }
    // Độ phức tạp: O(N)
    void display() const {
        DNode* current = head;
        while (current) {
            cout << current->data << (current->next ? " <-> " : "");
            current = current->next;
        }
        cout << endl;
    }
};
