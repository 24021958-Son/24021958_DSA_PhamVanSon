// 
#include <iostream>
#include <list>
using namespace std;
class QueueList {
private:
    std::list<int> dataList;
public:
    QueueList() {}
    // Độ phức tạp : O(1)
    void enqueue(int val) {
        dataList.push_back(val);
    }
    // Độ phức tạp : O(1)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!\n";
            return;
        }
        dataList.pop_front();
    }
    // Độ phức tạp : O(1)
    int front() {
        if (isEmpty()) {
            cout << "Queue rong!\n";
            return -1;
        }
        return dataList.front();
    }
    // Độ phức tạp: O(1)
    bool isEmpty() {
        return dataList.empty();
    }
};
