#include<iostream>
using namespace std;
long long fibonaci(int n) {
	if(n <= 1) {
		return 1;
	}
	else {
		return fibonaci(n - 1) + fibonaci(n - 2);
	}
}
int main() {
	int n = 0;
	cin >> n;
	cout << fibonaci(n);
	return 0;
}