#include<iostream>
#include<algorithm>
using namespace std;

// Nhập mảng ngẫu nhiên
void nhapMang(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		arr[i] = rand() % 1000 - 500;
	}
}

// Xuất mảng
void xuatMang(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

// Kiểm tra mảng có toàn số nguyên dương hay không. Nếu có trả vê true, không thì false
bool kiemTra(int arr[], int n) {
	bool kt = true;
	for(int i = 0; i < n; i++) {
		if(arr[i] < 0) {
			kt = false;
			break;
		}
		return kt;
	}
}

// Xóa tất cả các phần tử có giá trị = x trong mảng
void xoaPhanTu(int arr[], int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != x) {
            arr[count++] = arr[i];
        }
    }
    n = count; // Cập nhật kích thước mới của mảng
}

// Sắp xếp mảng theo thứ tự tăng dần
void mangTangDan(int arr[], int n) {
	sort(arr, arr + n);
}

// Chuyển 0 về cuối mảng
void chuyenMang(int arr[], int n) {
    int count = 0; // Biến đếm số lượng phần tử khác 0
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while(count < n) {
        arr[count++] = 0;
    }
}

int main() {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int arr[n];
	nhapMang(arr, n);
	cout << "\nMang ngau nhien: " << endl;
	xuatMang(arr, n);
	cout << endl;
	bool kt = kiemTra(arr, n);
	if(kt) {
		cout << "\nMang khong phai toan so duong." << endl;
	} else {
		cout << "\nMang toan so duong." << endl;
	}
	cout << "\nMang sap xep theo thu tu tang dan: " << endl;
	xuatMang(arr, n);
	chuyenMang(arr, n);
	cout << "\nMang truoc khi chuyen la: " << endl;
	xuatMang(arr, n);
	cout << "\nMang sau khi chuyen la: " << endl;                                  
	xuatMang(arr, n);
	int x;
    cout << "\nNhap gia tri x can xoa: ";
    cin >> x;
    xoaPhanTu(arr, n, x);
    cout << "\nMang sau khi xoa cac phan tu co gia tri " << x << " la: " << endl;
    xuatMang(arr, n);
    return 0;
}