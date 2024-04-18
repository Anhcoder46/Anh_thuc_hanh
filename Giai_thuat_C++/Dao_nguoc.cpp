#include<iostream>
using namespace std;
// In đảo ngược số n nguyên dương
void daoNguoc(int n) {
	if(n == 0) {
		return;
	} else {
		cout << n % 10;
		daoNguoc(n / 10);
	}
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	daoNguoc(n);
	return 0;
}