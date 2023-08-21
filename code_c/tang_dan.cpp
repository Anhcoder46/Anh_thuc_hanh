#include<iostream>
#include<conio.h>
using namespace std;
int main () {
	// in ra man hinh 5 so theo thu tu tang dan
	int a, b, c, d, e;
	cout << "Nhap 5 so: ";
	int temp;
	cin >> a >> b >> c >> d >> e;
	if(a > b) {
		temp = a;
		a = b;
		b = temp;
	}                  
	if(a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if(a > d) {
		temp = a;
		a = d;
		d = temp;
	}
	if(a > e) {
		temp = a;
		a = e;
		e = temp;
	}
	if(b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if(b > d) {
		temp = b;
		b = d;
		d = temp;
	}
	if(b > e) {
		temp = b;
		b = e;
		e = temp;
	}
	if(c > d) {
		temp = c;
		c = d;
		d = temp;
	}
	if(c > e) {
		temp = c;
		c = e;
		e = temp;
	}
	if(d > e) {
		temp = d;
		d = e;
		e = temp;
	}
	cout << "So tang dan la: " << a << b << c << d << e;
	cout << "\n";
	//tinh tong tu 1 den n
	int n;
	int sum = 0;
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "Tong cac so tu 1 den n la: " << sum;
	cout << "\n";
	//nhap sao tuong ung
	cout <<"*****\n";
	cout <<"*   *\n";
	cout <<"  * *\n";
	cout <<"   **\n";
	cout <<"    *";
	return 0;
}