#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	// liet ke tat ca cac uoc so nguyen duong
	int n, dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			i += 1;
		}
		dem++;
	}
	cout << dem;
	return 0;
}