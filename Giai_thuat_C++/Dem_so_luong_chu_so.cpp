#include<iostream>
using namespace std;
// Đếm số lượng chữ số nguyên dương n
int demChuSo(int n) {
	if(n == 0) {
		return 0;
	} else {
		return 1 + demChuSo(n / 10);
	}
}

int main() {
	int n;
	cout << "Nhap: ";
	cin >> n;
	int so = demChuSo(n);
	cout << "So luong chu so cua " << n << " la " << so << endl;
	return 0;
}
