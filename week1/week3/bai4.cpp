#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
class StackLinkedList {
private:
    Node* topNode; 
public:
    StackLinkedList() : topNode(nullptr) {}
    // Độ phức tạp : O(1)
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = topNode;
        topNode = newNode;
    }
    // Độ phức tạp: O(1)
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Khong the xoa.\n";
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    } 
    // Độ phức tạp: O(1)
    int top() {
        if (isEmpty()) {
            cout << "Stack rong!\n";
            return -1;
        }
        return topNode->data;
    }
    // Độ phức tạp: O(1)
    bool isEmpty() {
        return topNode == nullptr;
    }

    ~StackLinkedList() {
        while (!isEmpty()) {
            pop();
        }
    }
};
