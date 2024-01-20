#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {
    int n;
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> n;

    int* p = new int[n];
    if (!p) {
        cout << "Khong con du bo nho de cap nhat\n";
        return 1;
    }

    srand((unsigned)time(NULL));

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        p[i] = rand() % 100;
        cout << p[i] << " ";
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (p[i] > p[j]) {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    cout << "\nMang sau khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }

    delete[] p;
    return 0;
}