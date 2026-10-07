#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a[100];
    double tong = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        tong = tong + a[i];
    } // do phuc tap O(n)
    double trungBinh = tong / n;
    cout << "Cac phan tu >= trung binh: ";
    for(int i = 0; i < n; i++){
        if(a[i] >= trungBinh){
            cout << a[i] << " ";
        }
    } // do phuc tap O(n)
    return 0;
}
// phan tich do phuc tap:
// Time  : O(n) + O(n) = O(n)
// Memory: O(n)
