#include<iostream>
using namespace std;

int demCHUSO(int n) {
    if (n < 10) {
        return 1;
    }
    else {
        return 1 + demCHUSO(n / 10);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    int result = demCHUSO(n);
    cout << "So luong chu so: " << result << endl;
    return 0;
}
