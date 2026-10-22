#include <iostream>
using namespace std;
struct QNode {
    int data;
    QNode* next;
    QNode(int val) : data(val), next(nullptr) {}
};
class QueueLinkedList {
private:
    QNode* head; 
    QNode* tail; 
public:
    QueueLinkedList() : head(nullptr), tail(nullptr) {}
    // Độ phức tạp: O(1)
    void enqueue(int val) {
        QNode* newNode = new QNode(val);
        if (tail == nullptr) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    // Độ phức tạp: O(1)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!\n";
            return;
        }
        QNode* temp = head;
        head = head->next;
        if (head == nullptr) {
            tail = nullptr; 
        }
        delete temp;
    }
    // Độ phức tạp: O(1)
    int front() {
        if (isEmpty()) {
            cout << "Queue rong!\n";
            return -1;
        }
        return head->data;
    }
    // Độ phức tạp: O(1)
    bool isEmpty() {
        return head == nullptr;
    }
    ~QueueLinkedList() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};
