#include<bits/stdc++.h>
using namespace std;

//Tìm kiếm nhị phân (Binary search): Áp dụng vào danh sách đã được sắp xếp. 
//Chia đôi danh sách và so sánh giá trị tìm kiếm với phần tử ở giữa. 
//Nếu bằng nhau, kết thúc tìm kiếm; nếu không, tiếp tục tìm trong nửa phía trước hoặc nửa phía sau của danh sách.
//Tìm kiếm nhị phân là một thuật toán được sử dụng để tìm kiếm một phần tử cụ thể trong một mảng đã được sắp xếp theo thứ tự tăng dần (hoặc giảm dần). 
//Thuật toán này hoạt động bằng cách so sánh phần tử cần tìm với phần tử ở giữa mảng.
//Nếu phần tử ở giữa mảng nhỏ hơn phần tử cần tìm, thì tìm kiếm được tiếp tục trên mảng con bên phải. 
//Ngược lại, nếu phần tử ở giữa mảng lớn hơn phần tử cần tìm, thì tìm kiếm được tiếp tục trên mảng con bên trái. 
//Thuật toán này lặp lại quá trình này cho đến khi tìm thấy phần tử cần tìm hoặc khi cả mảng đã được duyệt hết.
//Trong tìm kiếm nhị phân, mỗi lần so sánh giữa phần tử ở giữa mảng và phần tử cần tìm giảm đi một nửa số phần tử so với lần trước, 
//do đó thuật toán này có hiệu suất tìm kiếm cao hơn so với tìm kiếm tuyến tính.
//Tìm kiếm nhị phân được sử dụng rộng rãi trong các bài toán tìm kiếm trên dữ liệu đã được sắp xếp nhanh chóng và hiệu quả.và hiệu quả.

int binarySearch(int arr[], int left, int right, int target) {
	while(left <= right) {
		int mid = (left + right) / 2;
		if(arr[mid] == target) {
			return mid;
		}
		if(arr[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
		return -1;
	}
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
	 
	 int target;
	 cout << "\n Nhap gia tri can tim: ";
	 cin >> target;
	  
	 int index = binarySearch(arr, 0, n - 1, target);
	 if(index == -1) {
	 	cout << "\n Khong tim thay.";
	 }
	 else {
	 	cout << "\n So can tim o vi tri: " << index;
	 }
	 return 0;
 }