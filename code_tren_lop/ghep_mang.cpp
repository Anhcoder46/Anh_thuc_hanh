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


void ghep(int a[], int n, int b[], int m, int c[], int k){
	for(int i = 0;i < n; i++)
		c[i] = a[i];
	for(int i = n; i < n + m; i++)
		c[i] = b[i - n];
}
int main() {
	int n = 0, m = 0, k = 0;
	cin >> n >> m; // s? lu?ng ph?n t? m?ng a,b
	int a[n]; 
	int b[m];
	k = n + m;
	int c[k];
	nhapNgauNhien(a, n);
	nhapNgauNhien(b, m);
	xuat(a, n);
	xuat(b, m);	
	ghep(a, n, b, m, c, k);
	xuat(c, k);	
	return 0;
}









