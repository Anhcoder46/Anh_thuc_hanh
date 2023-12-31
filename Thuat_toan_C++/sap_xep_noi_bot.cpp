#include <iostream>
#include <stdio.h>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
// Hàm sắp xếp bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n - 1; i++) {
    // i phần tử cuối cùng đã được sắp xếp
        haveSwap = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if(haveSwap == false) {
            break;
        }
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
        cout << "\nNhap vao so luong phan tu: ";
        cin >> n;
    } while(n <= 0);
    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
       	cin >> a[i];
    };
    bubbleSort(a, n);
    cout << "Mang sau khi duoc sap xep: \n";
    printArray(a, n);
	return 0;
}
/* #include <iostream>
using namespace std;

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool haveSwap = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                haveSwap = true; 
            }
        }

        if (haveSwap == false) {
            break;
        }
    }
}

int main() {
    int a[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    BubbleSort(a, n);
    PrintArray(a, n);
    return 0;
}
*/