//Đề: In mảng - duyệt mảng (mãng tĩnh)
//-in theo thứ tự bình thường
//-in các số chẵn -> lẽ -> các số bằng 0
//-in số 0 -> âm -> dương
#include <iostream>
using namespace std;
// Hàm in mảng
void printMang(int a[], int n) {
    cout << "Mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
   	cout << endl;
}

// Hàm in số chẵn -> số lẻ -> số 0
void printChanLeZero(int a[], int n) {
    cout << "So chan -> so le -> so 0: ";
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0 && a[i] != 0) {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

// Hàm in số 0 -> số âm -> số dương
void printZeroAmDuong(int a[], int n) {
    cout << "So 0 -> so am -> so duong: ";
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int a[] = {2, -3, 0, 5, -7, 0, 8, 9, 0, 10};
    int n = sizeof(a) / sizeof(a[0]);
    printMang(a, n);
    printChanLeZero(a, n);
    printZeroAmDuong(a, n);
    return 0;
}
