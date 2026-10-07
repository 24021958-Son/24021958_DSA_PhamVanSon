#include<iostream>
using namespace std;

void chenPhanTu(int a[], int &n, int y, int m){
    for(int i = n; i > m; i--){
        a[i] = a[i - 1];
    } // do phuc tap O(n)
    a[m] = y;
    n++;
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int y, m;
    cin >> y >> m;
    chenPhanTu(a, n, y, m);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
// phan tich do phuc tap:
// Time  : O(n)
// Memory: O(1)
