#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n, tam;
	cout << "Nhap n: ";
	cin >> n;
	int temp = 0;
	while(n > 0) {
		tam = n % 10;
		temp = temp * 10 + tam;
		n = n / 10;
	}
	cout <<
}