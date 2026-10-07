#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long gt = 1;
    for(int i = 1; i <= n; i++){
        gt = gt * i;
    } // do phuc tap O(n)
    cout << gt;
    return 0;
}
// phan tich do phuc tap:
// Time  : O(1) + O(n) + O(1) = O(n)
// Memory: O(1)
