#include <iostream>
using namespace std;

int Max(int n, int maxDigit) {
    if (n == 0) {
        return maxDigit;
    } else {
        int digit = n % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        return Max(n / 10, maxDigit);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    int maxDigit = Max(n, 0);
    cout << "Chu so lon nhat " << n << " la: " << maxDigit << endl;

    return 0;
}