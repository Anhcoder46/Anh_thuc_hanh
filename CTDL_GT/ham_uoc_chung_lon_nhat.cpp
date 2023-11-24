#include<iostream>
using namespace std;

int ucln(int a, int b) {
	while(a * b != 0) {
		if(a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}

int main() {
	int a, b;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << ucln(a, b);
	return 0;
}