#include <iostream>
using namespace std;

int main() {
//    int a[5] = {1, 2, 3, 4, 5};
//    cout << "Mang Tinh" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl << "Mang Dong" << endl;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "Cac phan tu trong mang: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}