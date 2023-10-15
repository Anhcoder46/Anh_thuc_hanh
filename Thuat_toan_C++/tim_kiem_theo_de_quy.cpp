#include<bits/stdc++.h>
using namespace std;
/*Tìm kiếm theo đệ quy (Recursive search): Sử dụng phương pháp gọi đệ quy để tìm kiếm.
Thường được áp dụng vào danh sách liên kết hoặc cây để tìm kiếm một phần tử cụ thể*/
int  recursiveSearch(int arr[], int left, int right, int target) {
	if(left > right)
		return -1; // không tìm thấy
	int mid = (left + right) / 2;
	if(arr[mid] == target) {
		return mid; // trả về vị trí phần tử cần tìm
	}
	if(arr[mid] > target) {
		//tìm kiếm nửa đầu mảng
		return recursiveSearch(arr, left, mid - 1, target);
	} else {
		// tìm kiếm nửa sau mảng
		return recursiveSearch(arr,  mid + 1, right, target);
	}
}

int main() {
	int n;
	cout << "\n Nhap so luong phan tu cua mang: ";
	cin >> n;
	int arr[n];
	cout << "\n Nhap mang: ";
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cout << "\n Nhap gia tri can tim: ";
	cin >> target;
	int index = recursiveSearch(arr, 1, n - 1, target);
	if(index != 1) {
		cout << "So can tim o vi tri: " << index;
	} else {
		cout << "Khong tim thay.";
	}
	return 0;
}