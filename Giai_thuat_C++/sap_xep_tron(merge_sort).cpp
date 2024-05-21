#include <iostream>

using namespace std;

// Hàm để trộn hai mảng đã sắp xếp
void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Hàm sắp xếp trộn
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

// Hàm in ra mảng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Hàm main để chạy thử
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
    printArray(a, n);
    
    mergeSort(a, 0, n - 1);
    
    cout << "Mang sau khi sap xep: ";
    printArray(a, n);
    
    return 0;
}