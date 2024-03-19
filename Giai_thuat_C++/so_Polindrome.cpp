#include<iostream>
using namespace std;

int main() {
    int n, tam, daoNguoc = 0;
    cout << "Nhap so: ";
    cin >> n;//15351
    tam = n;

    while (tam != 0) {
        int chuSo = tam % 10;
        daoNguoc = daoNguoc * 10 + chuSo;
        tam = tam / 10;
    }

    if (n == daoNguoc) {
    	cout << n << " la so Palindrome.";
	} else {
    	cout << n << " khong phai la so Palindrome.";
	}
    return 0;
}
