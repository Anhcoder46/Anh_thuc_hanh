#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int dem = 0;
	while(n >= 10) {
		n = n / 10;
		dem++;
	}
	cout << "So luong chu so nguyen la: " << dem + 1 << endl;
	return 0;
}