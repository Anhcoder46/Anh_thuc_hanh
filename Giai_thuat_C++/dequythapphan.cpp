// Hàm đổi số thập phân ra nhị phân
#include<iostream>
using namespace std;

void tp(int n) {
	if(n < 2) {
		cout << n;
	} else {
		tp(n / 2);
		cout << n % 2;
	}
}

int main() {
	int n = 0;
	cin >> n;
	tp(n);
	return 0;
}