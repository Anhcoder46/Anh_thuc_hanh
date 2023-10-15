#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void nhap(int a[], int n) { // nh?p m?ng
	for(int i = 0; i < n; i++) {
		cout << "nhap pt a[" << i << "]: ";
		cin >> a[i];
	}
}

void nhapNgauNhien(int a[], int n) { // nh?p m?ng
	srand((int) time(0));
	for(int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
}

void xuat(int a[], int n) {
	cout << endl << "cac pt trong mang" << endl;
	for(int i = 0; i < n; i++) //in m?ng
		cout << setw(5) << a[i];
	cout << endl;
}
void sapXepChon(int a[], int n) {
	int i, j, k;
	for(i = 0; i < n - 1; i++) {
		j = i;
		for (k = j + 1; k < n; k++) 
			if (a[j] > a[k]) 
				j = k;
		swap(a[i], a[j]);
	}
}
int main() {
	int n = 0;
	cin >> n ; // s? lu?ng ph?n t? m?ng a
	int a[n];
	nhapNgauNhien(a, n);
	xuat(a, n);
	sapXepChon(a, n);
	xuat(a, n);
	return 0;
}









