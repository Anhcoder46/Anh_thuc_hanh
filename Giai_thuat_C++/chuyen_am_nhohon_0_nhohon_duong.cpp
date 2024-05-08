#include<iostream>
using namespace std;

// Hàm hoán đổi giá trị của hai phần tử
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Hàm sắp xếp mảng theo thứ tự tăng dần
void sapxep(int a[], int n) {
    // Sử dụng thuật toán bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    
    // In ra mảng đã sắp xếp
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    sapxep(a, n);
    
    return 0;
}