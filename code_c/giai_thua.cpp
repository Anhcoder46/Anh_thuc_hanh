#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int giai_thua = 1;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		giai_thua *= i;
	}
	cout << "Giai_thua cua " << n << " la: " << giai_thua << endl;
	return giai_thua;
}