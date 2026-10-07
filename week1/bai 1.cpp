#include <iostream>
using namespace std ;
int main()
{
    int n;
cin >> n; 
int a[n];
int tong = 0;
for (int i = 0; i < n; i++) {
    cin >> a[i];
} /// do phuc tap O(n)
for (int i = 0; i < n; i++) {
    tong = tong + a[i];
} /// do phuc tap O(n)
cout << tong;
return 0;
/// do phuc tap time : O(1) + O(n) + O(n) + O(1) = O(2n) = O(n)
/// do phuc tap memory : O(n) (dung mang a[n])
}
