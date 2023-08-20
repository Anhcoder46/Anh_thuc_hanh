#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int so, temp, sum = 0;
	cout << "Nhap so: ";
	cin >> so;
	temp = so;
	while(temp != 0) {
		sum += temp % 10;
		temp /= 10;
	}
	cout << "Tong so do la: " << sum << endl;
	return 0;
}