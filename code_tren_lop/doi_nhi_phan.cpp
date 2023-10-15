#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void f(int n) {
	if(n > 0) {
		f(n / 2);
		cout << n % 2;
	}
}
int main() {	
	int n = 0;
	cin >> n;
	f(n);
	return 0;
}