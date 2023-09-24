#include<iostream>
using namespace std;
int demCHUSO(int n) {
	if(n < 10) {
		return 1;
	}
	else {
		return 1 + demCHUSO(n / 10);
	}
}

int main() {
	int n;
	cin >> n;
	demCHUSO(n);
	return 0;
}