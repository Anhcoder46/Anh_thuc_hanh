#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
long long mu(int n) {
	if(n == 1) {
		return 1;
	}
	else {
		return mu(n - 1) + pow(n, 2);
	}
}
int main() {
	int n = 0;
	cin >> n;
	cout << mu(n) << setw(4);
	return 0;
}