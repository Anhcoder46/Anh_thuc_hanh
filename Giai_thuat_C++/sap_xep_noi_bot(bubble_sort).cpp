#include <iostream>
#include <algorithm>
using namespace std;
// Hàm sắp xếp mảng bằng Bubble Sort
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
            	swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int a[1000];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    bubbleSort(a, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
