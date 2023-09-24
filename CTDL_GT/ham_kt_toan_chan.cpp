#include <iostream>
using namespace std;

bool Le(int n) {
    if (n < 10) {
        return (n % 2 == 0);
    } else {
        int temp = n % 10;
        if (temp % 2 != 0) {
            return false;
        }
        return Le(n / 10);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (Le(n)) {
        cout << n << " co toan chu so chan." << endl;
    } else {
        cout << n << " co ca chu so chan va le." << endl;
    }

    return 0;
}