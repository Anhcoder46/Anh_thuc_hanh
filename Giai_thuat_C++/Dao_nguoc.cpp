 //In đảo ngược số n nguyen duong
#include <iostream>
using namespace std;
int daonguoc(int n) {
    if (n == 0) {
        return 0;
    }
    cout << n % 10;
    return daonguoc(n / 10);
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
	cout << "So dao nguoc cua " << n << " la: ";
    if (n < 10) {
        cout << n;
    } else {
        daonguoc(n);
    }
    return 0;
}