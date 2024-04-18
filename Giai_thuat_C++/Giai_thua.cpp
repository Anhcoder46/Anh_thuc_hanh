//Tính n!
#include<iostream>
using namespace std;
int gt(int n) {
	if(n <= 1) {
		return n;
	} else {
		return n * gt(n - 1);
	}
}

int main() {
	int n = 0;
	cin >> n;
	cout << gt(n);
	return 0;
}