#include<iostream>
using namespace std;
// Tìm giá trị nguyên logarit cơ số 2 của n
int log2(int n) {
	if(n < 2) {
		return 0;
	} else {	
		return 1 + log2(n / 2);
	}
}
int main(){
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
	} while(n < 0);
	int log2_n = log2(n);
	cout << "Gia tri nguyen co so 2 cua " << n << " la: " << log2_n;
	return 0;
}
