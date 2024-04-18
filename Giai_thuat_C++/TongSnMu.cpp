// Tính S(n) = 1^2 + 2^2 + 3^2 + .. + n^2 với n >= 0
#include<iostream>
#include<cmath>
using namespace std;
int S(int n) {
	if(n == 0) {
		return n;
	} else {
		return S(n - 1) + pow(n, 2);
	}
}
int main() {
	int n = 0;
	cin >> n;
	cout << S(n);
	return 0;
}