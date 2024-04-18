// Tính tổng S(n) =  1 + 3 + 5 + ... + (2n + 1) với n >= 0
#include<iostream>
using namespace std;
int S(int n) {
	if(n == 0) {
		return 1;
	} else {
		return S(n - 1) + (2 * n + 1);
	}
}
int main() {
	int n = 0;
	cin >> n;
	cout << S(n);
	return 0;
}