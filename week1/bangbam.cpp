#include <iostream>
#include <list>
#include <vector>
using namespace std;
class SeparateChainingHashTable {
private:
    int SIZE;
    vector<list<pair<int, string>>> table;
    int hashFunction(int key) {
        return (key % SIZE + SIZE) % SIZE; 
    }
public:
    SeparateChainingHashTable(int size = 11) : SIZE(size) {
        table.resize(SIZE);
    }
    void insert(int key, string value) {
        int idx = hashFunction(key);
        for (auto &entry : table[idx]) {
            if (entry.first == key) {
                entry.second = value; 
                return;
            }
        }
        table[idx].push_back({key, value});
    }
    string find(int key) {
        int idx = hashFunction(key);
        for (const auto &entry : table[idx]) {
            if (entry.first == key) {
                return entry.second;
            }
        }
        return "NULL"; 
    }
    void erase(int key) {
        int idx = hashFunction(key);
        for (auto it = table[idx].begin(); it != table[idx].end(); ++it) {
            if (it->first == key) {
                table[idx].erase(it);
                return;
            }
        }
    }
};
