#include<iostream>
using namespace std;
long long gt(int n) {
	if(n <= 1) {
		return 1;
	}
	else {
		return n * gt(n - 1);
	}
}
int main() {
	int n = 0;
	cin >> n;
	cout << gt(n);
	return 0;
}