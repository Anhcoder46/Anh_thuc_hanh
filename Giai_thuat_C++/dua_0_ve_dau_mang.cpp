#include <iostream>
using namespace std;

void moveZerosToFront(int arr[], int n) {
    int left = 0; // Con trỏ chỉ đến vị trí cần thay đổi

    // Duyệt qua mảng và hoán đổi vị trí các số 0 về đầu mảng
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[left], arr[i]);
            left++;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Gọi hàm để đưa các số 0 về đầu mảng
    moveZerosToFront(arr, n);

    cout << "Mang sau khi dua cac so 0 ve dau: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
