#include<iostream>
using namespace std;
int main() {
	int giai_thua = 1;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 1; i <= n; i++) {
		giai_thua *= i;
	}
	cout << "Giai thua cua " << n << " la: " << giai_thua << endl;
	return giai_thua; 
}