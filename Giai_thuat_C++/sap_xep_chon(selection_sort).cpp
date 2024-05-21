#include <iostream>
#include <algorithm>
using namespace std;
// Hàm sắp xếp mảng bằng Insertion Sort
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        //Dùng 1 biến để lưu chỉ số của phần tử nhỏ nhất
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[i], a[min]);
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
    
    selectionSort(a, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}