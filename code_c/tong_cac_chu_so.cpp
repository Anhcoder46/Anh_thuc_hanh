#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int so, temp;
	int sum = 0;
	cout << "Nhap so: ";
	cin >> so;
	temp = so;
	while(temp != 0) {
		sum += temp % 10;
		temp /= 10;
	}
	cout << "Tong cac chu so la: " << sum << endl;
	return 0;
}