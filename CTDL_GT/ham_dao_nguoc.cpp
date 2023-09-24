#include<iostream>
using namespace std;
void dn(int n) {
	if(n < 10) {
		cout << n;;
	}
	else {
		cout << n % 10;
		dn(n / 10);
	}
}

int main() {
	int n;
	cin >> n;
	dn(n);
}