#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int f(int n){
	if (n == 1)
		return 1;
	return f(n - 1) + pow(n, 2);
}
int main() {	
	int n = 0;
	cin >> n;
	cout << f(n) << setw(4);
	return 0;
}