#include <iostream>
using namespace std;
// Hàm sắp xếp mảng bằng Selection Sort
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
    	//lấy ra phần tử ở chỉ số i
    	int x = a[i], pos = i - 1;
    	while(pos >= 0 && x < a[pos]) {
    		a[pos + 1] = a[pos];
    		--pos;
		}
		a[pos + 1] = x;
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
    
    insertionSort(a, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}