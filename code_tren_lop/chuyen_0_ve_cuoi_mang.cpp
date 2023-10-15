#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void nhap(int a[], int n) { // nhập mảng
    for (int i = 0; i < n; i++) {
        cout << "nhap pt a[" << i << "]: ";
        cin >> a[i];
    }
}

void nhap2(int a[], int n) { // nhập mảng
    srand((int)time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}

void xuat(int a[], int n) {
    cout << endl << "cac pt trong mang" << endl;
    for (int i = 0; i < n; i++) //in mảng
        cout << setw(5) << a[i];
    cout << endl;
}

int tong(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s = s + a[i];
    }
    return s;
}

void xuat2(int a[], int n) {
    cout << endl << "cac pt trong mang" << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] != 0)
            cout << setw(5) << a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0)
            cout << setw(5) << a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            cout << setw(5) << a[i];
    }
}

void chuyen(int a[], int n) {
    int j = 0; // Biến đếm số lượng phần tử khác 0
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
}

int tim(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

void daoNguoc(int a[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

void ghep(int a[], int n, int b[], int m, int c[], int& k) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++) {
        c[n + i] = b[i];
    }
    k = n + m;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu mang: ";
    cin >> n; // số lượng phần tử mảng
    int a[n]; // mảng có độ dài n
    nhap2(a, n);
    xuat(a, n);

    chuyen(a, n);
    xuat(a, n);

    return 0;
}