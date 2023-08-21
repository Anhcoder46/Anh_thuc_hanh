#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n, tich = 1;
	cout  << "Nhap n: ";
	cin >> n;
	while(n > 0) {
		int t = n % 10;
		tich = tich * t;
		n = n / 10;
	}
	cout << "Tich so do la: " << tich << endl;
	return 0;
}