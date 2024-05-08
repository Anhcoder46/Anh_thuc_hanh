#include<iostream>
using namespace std;
// Viết hàm đệ quy tính C(n, k) biết
// C(n, k) = 1 nếu k = 0 hoặc k = n
// C(n, k) = 0 nếu k > n
// C(n, k) = C(n - 1, k) + C(n - 1, k - 1) nếu 0 < k < n 
int Cnk(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else if (k > n) {
        return 0;
    }
    return Cnk(n - 1, k) + Cnk(n - 1, k - 1);
   
}
int main() {
    int n, k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;
    int ketqua = Cnk(n, k);
    cout << "C(" << n << ", " << k << ") = " << ketqua;
    return 0;
}