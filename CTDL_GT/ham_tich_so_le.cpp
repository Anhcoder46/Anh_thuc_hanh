#include<iostream>
using namespace std;
int t(int n) {
	if(n <= 0) {
		return 1;
	}
	else {
		return (2 * n - 1) * t(n - 1);
	}
}

int main() {
	int n;
	cin >> n;
	cout << t(n);
	return 0;
}