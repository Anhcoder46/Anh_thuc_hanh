#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Tinh tong cac phan tu trong mang
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    cout << "Tong cac phan tu trong mang la: " << tong << endl;

    // Tinh tong cac phan tu le trong mang
    int tongLe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tongLe += a[i];
        }
    }
    cout << "Tong cac phan tu le trong mang la: " << tongLe << endl;

    // Sap xep mang giam dan
    sort(a, a + n, greater<int>());
    cout << "Mang sau khi sap xep giam dan la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Thay mang bang cach su dung 3 con tro
    int* mang1 = a;
    int* mang2 = &a[n/2];
    int* mang3 = &a[n-1];
    for (int i = 0; i < n; i++) {
        if (i < n/3) {
            a[i] = *mang1;
            mang1++;
        } else if (i < 2*n/3) {
            a[i] = *mang2;
            mang2++;
        } else {
            a[i] = *mang3;
            mang3--;
        }
    }
    cout << "Mang sau khi thay doi la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}