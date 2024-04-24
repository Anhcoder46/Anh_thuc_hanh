// Tính tổng S(n) = 1 + 2 + 3 + ... + n với n >= 0
#include<iostream>
using namespace std;
int S(int n) {
	if(n == 1) {
		return n;
	} else {
		return n + S(n - 1);
	}
}

int main() {
	int n = 0;
	cin >> n;
	cout << S(n);
	return 0;
}