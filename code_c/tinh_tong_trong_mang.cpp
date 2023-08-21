#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	// tinh tong cac s  trong mang
	char a[10];
	int n, sum = 0;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		cout << "Nhap so phan tu a[" << i << "] : ";
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(islower(a[i])) {
			a[i] = toupper (a[i]);
		}
		else if(isdigit(a[i])) {
			sum += (a[i] - 48);
		}
	}
	for(int i = 0; i < n; i++) {
	
		cout << endl << sum;
		return 0;
	}
}