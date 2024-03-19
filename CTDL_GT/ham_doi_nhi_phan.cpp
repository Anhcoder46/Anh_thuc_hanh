#include<iostream>
using namespace std;

void np(int n) {
	if(n > 0) {
		np(n / 2);
		cout << n % 2;
	}
}
int main() {
	int n;
	cin >> n;
	np(n);
	return 0;
}