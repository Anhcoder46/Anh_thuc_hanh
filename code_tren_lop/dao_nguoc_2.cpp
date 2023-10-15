#include <iostream>
#include <cmath>
using namespace std;
void f(int n) {
	if (n < 10)
		cout << n;
	else{
		cout << n % 10;
		f(n / 10); 
	}	
}
int main() {
	int n = 0;
	cin >> n; // 532
	f(n); //235
	return 0;
}