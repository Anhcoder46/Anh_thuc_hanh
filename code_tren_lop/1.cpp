#include <iostream>
#include <cmath >
using namespace std;
int main() {
	int soNguyen = 0;
	cin >> soNguyen; //input: 121
	int tong = 0, du = 0;
	int tam = soNguyen;
	while(soNguyen > 0) {
		du = soNguyen % 10;// 1 2 1
		tong = tong + pow(du, 3);// 1 9 10
		soNguyen = soNguyen / 10;// 12 1 0
	}
	if(tam == tong) {
		cout << "OK";
	} else {
	
		cout<< "NOT OK";
	 }
}