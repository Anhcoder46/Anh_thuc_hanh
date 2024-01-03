#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int i, n, s = 0;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 1; i <= n; i++) {
		if(i % 2 != 0) {
			s = s + i * i; 
		}
	}
	cout << "Tong cac so le binh phuong la: " << s << endl;
	return 0;
}