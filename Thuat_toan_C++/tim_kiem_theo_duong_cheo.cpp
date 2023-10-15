#include<bits/stdc++.h>
using namespace std;

/*Tìm kiếm tìm kiếm theo đường chéo (Jump search): Áp dụng vào danh sách đã được sắp xếp.
 Nhảy từ phần tử này sang phần tử khác với một khoảng cách mốc cho đến khi tìm được vùng phần tử cần tìm. 
 Tiếp tục tìm kiếm trong vùng này bằng tìm kiếm tuyến tính.
Jump Search là thuật toán tìm kiếm trong một mảng đã được sắp xếp. 
Ý tưởng của thuật toán này là sử dụng một bước "nhảy" cố định để kiểm tra các phần tử trong mảng, 
thay vì kiểm tra từng phần tử một theo thứ tự tuyến tính. Dưới đây là ý tưởng cơ bản của thuật toán Jump Search trong C++:
+Đầu tiên, kiểm tra phần tử ở vị trí đầu tiên (vị trí 0) trong mảng đã được sắp xếp. 
Nếu phần tử này trùng với giá trị cần tìm, thuật toán kết thúc và trả về vị trí này.
+ Tiếp theo, xác định kích thước của bước "nhảy" sử dụng căn bậc hai của kích thước mảng. 
Đặt biến jump_size = sqrt(size), trong đó size là số lượng phần tử trong mảng.
+ Bắt đầu từ vị trí jump_size, kiểm tra phần tử tại vị trí hiện tại. 
Nếu phần tử này lớn hơn giá trị cần tìm, ta di chuyển quay lại vị trí jump_size/2 và 
tiếp tục bước này cho đến khi tìm được phần tử nhỏ hơn hoặc bằng giá trị cần tìm (hoặc khi vị trí đang xét vượt quá phạm vi mảng).
+ Khi tìm được một phần tử nhỏ hơn hoặc bằng giá trị cần tìm, 
ta thực hiện tìm kiếm tuyến tính trong một đoạn mảng nhỏ hơn để tìm vị trí chính xác của giá trị cần tìm.*/

int jumpSearch(int arr[], int x, int n) {
	int step = sqrt(n); // kích thước của bước nhảy
	int prew = 0;
	// tìm vị trí của khoảng chứa giá trị cần tìm
	while(arr[min(step, n) - 1] < x) {
		prew = step;
		step += sqrt(n);
		if(prew >= n) return -1;
	}
	while(arr[prew] == x) {
		return prew;
	}
	return -1;
}

int main() {
	int n;
	cout << "/n Nhap so luong phan tu cua mang: ";
	cin >> n;
	int arr[n];
	cout << "/n Nhap mang: ";
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key;
	cout << "/n Nhap gia tri can tim: ";
	cin >> key;
	int index = jumpSearch(arr, x, n);
	if(index != -1) {
		cout << "So can tim o vi tri: " << index;
	} else {
		cout << "Khong tim thay.";
	}
	return 0;
}