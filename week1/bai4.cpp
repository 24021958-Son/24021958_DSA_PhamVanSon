#include<iostream>
using namespace std;
int UCLN(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void rutGon(int &a, int &b){
    int ucln = UCLN(a, b);
    a = a / ucln;
    b = b / ucln;
}
int main(){
    int a, b;
    cin >> a >> b;
    rutGon(a, b);
    cout << a << "/" << b;
    return 0;
}
// phan tich do phuc tap:
// UCLN bang thuat toan Euclid: O(log(min(a,b)))
// Time  : O(log(min(a,b)))
// Memory: O(1)
