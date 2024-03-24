#include<iostream>
using namespace std;
long long S(int n) {
	if(n == 1) {
		return 1;
	}
	else {
		return n + S(n - 1);
	}
}
int main() {
	int n = 0;
	cin >> n;
	cout << S(n);
	return 0;
}