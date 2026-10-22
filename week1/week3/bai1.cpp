#include <iostream>
#include <stdexcept>

using namespace std;

class IntegerList {
private:
    int* data;
    int size;
    int capacity;

    // Độ phức tạp: O(N)
    void resize() {
        capacity *= 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    // Độ phức tạp: O(1)
    IntegerList(int cap = 10) {
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }

    // Độ phức tạp: O(1)
    ~IntegerList() {
        delete[] data;
    }

    // Độ phức tạp: Trung bình O(1) (Amortized), Trường hợp xấu nhất là O(N) khi phải gọi resize()
    void append(int value) {
        if (size == capacity) {
            resize();
        }
        data[size++] = value;
    }

    // Độ phức tạp: O(1)
    int get(int index) const {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds");
        }
        return data[index];
    }

    // Độ phức tạp: O(N)
    void remove(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds");
        }
        for (int i = index; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        size--;
    }

    // Độ phức tạp: O(1)
    int getSize() const {
        return size;
    }
};
