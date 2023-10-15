#include <iostream>
using namespace std;
int f(int n, int max) {
	if (n == 0) return max;
	int du = n % 10;
	max = du > max? du : max;
	return f(n / 10, max);
}
int main() {
	int n = 0;
	cin >> n;
	cout << f(n, 0);
	return 0;
}