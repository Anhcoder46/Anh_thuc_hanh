#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/* Hàm sắp xếp sử dụng thuật toán sắp xếp chèn */
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Di chuyển các phần tử có giá trị lớn hơn giá trị key về sau một vị trí so với vị trí ban đầu của nó */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/* Hàm xuất mảng */
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i];
        cout << "\t";
    }
}

int main() {
    int n;
    do {
        cout << "\nNhap so luong phan tu co trong mang: ";
        cin >> n;
    } while (n <= 0);
    int* a = new int[n]; // Cấp phát động mảng a
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
    insertionSort(a, n);
    cout << "Mang sau khi duoc sap xep: \n";
    printArray(a, n);
    delete[] a; // Giải phóng bộ nhớ đã cấp phát động cho mảng a
    return 0;
}

/* #include<iostream>

using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void insertionSort(int a[], int n) {
	int index, value;
	for (int i = 1; i < n; i++) {
		index = i;
		value = a[i];
		while (index > 0 && a[index - 1] > value) {
			a[index] = a[index - 1];
			index --;
		}
		a[index] = value;
	}
} 
int a[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	insertionSort(a, n);
	printArray(a, n);
	
	return 0;
} */