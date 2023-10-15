#include <iostream>
#include <cmath>
using namespace std;
int f(int n) {
	if(n < 10)
		return 1;
	else
		return 1 + f(n / 10);	
}
int main() {
	int n = 0;
	cin >> n; // 532
	cout << f(n); //3
	return 0;
}