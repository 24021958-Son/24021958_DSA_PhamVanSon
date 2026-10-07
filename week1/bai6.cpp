#include<iostream>
using namespace std;

void xoaPhanTu(int a[], int &n, int k){
    for(int i = k; i < n - 1; i++){
        a[i] = a[i + 1];
    } // do phuc tap O(n)
    n--;
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    xoaPhanTu(a, n, k);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
// phan tich do phuc tap:
// Time  : O(n)
// Memory: O(1)
