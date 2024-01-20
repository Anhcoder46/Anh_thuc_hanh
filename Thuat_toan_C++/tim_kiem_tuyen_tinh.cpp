1#include<iostream>
using namespace std;
// Tìm kiếm tuyến tính (Linear search): Kiểm tra từng phần tử trong danh sách cho đến khi tìm thấy kết quả hoặc hết danh sách.

int linearSearch(int arr[], int n, int key) {
	for(int i = 0; i < n; i++) {
		if(arr[i] == key) {
			return i; // Trả về vị trí của giá trị cần tìm
		}
	}
	return -1; // Trả về -1 nếu không tím thấy giá trị cần tìm
}

 int main() {
 	int n;
 	cout << "Nhap so luong phan tu cua mang: ";
 	cin >> n;
 	
 	int arr[n];
 	cout << "\n Nhap mang: ";
 	for(int i = 0; i < n ; i++) {
 		cin >> arr[i];
	 }
	 
	 int key;
	 cout << "\n Nhap gia tri can tim: ";
	 cin >> key;
	 
	 int index = linearSearch(arr, n, key);
	 if(index == -1) {
	 	cout << "\n Khong tim thay.";
	 }
	 else {
	 	cout << "\n So can tim o vi tri: " << index;
	 }
	 return 0;
 }