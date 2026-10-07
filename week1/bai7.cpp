#include <iostream>
using namespace std;

int tinhTong(int a[][100], int n, int m){
    int tong = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            tong = tong + a[i][j];
        }
    }
    return tong;
}
// Độ phức tạp: Time O(n*m), Memory O(1)
void xoaDong(int a[][100], int &n, int m, int i){
    for(int k = i; k < n - 1; k++){
        for(int j = 0; j < m; j++){
            a[k][j] = a[k + 1][j];
        }
    }
    n--;
}
int main(){
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    // Độ phức tạp: Time O(n*m), Memory O(n*m)
    // Cau a
    cout << "Tong = " << tinhTong(a, n, m) << endl;
    // Cau b
    int i;
    cin >> i;
    if(i < 0 || i >= n){
        cout << "Vi tri dong khong hop le";
        return 0;
    }
    xoaDong(a, n, m, i);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // Độ phức tạp: Time O(n*m), Memory O(1)
    return 0;
}
// Time toàn bộ chương trình: O(n*m)
// Memory: O(n*m)
