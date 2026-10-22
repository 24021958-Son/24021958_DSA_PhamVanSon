#include <iostream>
#include <list>
using namespace std;
class StackList {
private:
    std::list<int> dataList;
public:
    StackList() {}
    // Độ phức tạp : O(1)
    void push(int val) {
        dataList.push_front(val);
    }
    // Độ phức tạp : O(1)
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!\n";
            return;
        }
        dataList.pop_front();
    } 
    // Độ phức tạp : O(1)
    int top() {
        if (isEmpty()) {
            cout << "Stack rong!\n";
            return -1;
        }
        return dataList.front();
    } 
    // Độ phức tạp : O(1)
    bool isEmpty() {
        return dataList.empty();
    }
};
