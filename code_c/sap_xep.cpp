#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b, c;
	int temp;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	if(a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c) {
		temp = a;
		a = c;
		c = temp; 
	}
	if(b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	cout << a << b << c << endl;
	return 0;
}