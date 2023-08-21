#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int i, n, s = 0;
	cout << "Nhap n: ";
	for(i = 1; i <= n; i++) {
		if(i % 2 != 0) {
			s = s + i * i;
		}
	}
	cout << "Tong binh phuong cac so le la: " << s <<"" << endl;
	return 0;
}