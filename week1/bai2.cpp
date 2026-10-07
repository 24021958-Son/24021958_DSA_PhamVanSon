#include<iostream>
using namespace std;

void sapXep(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
} // do phuc tap O(n^2)
int main(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } // O(n)
    sapXep(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    } // O(n)
    return 0;
}
// phan tich do phuc tap:
// Time  : O(n) + O(n^2) + O(n) = O(n^2)
// Memory: O(n)
