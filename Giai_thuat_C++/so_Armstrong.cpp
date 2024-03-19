#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, tam, dem = 0, sum = 0;
    cout << "Nhap so: ";
    cin >> n;//153
    tam = n;

    while (tam != 0) {
        tam = tam / 10;
        dem++;
    }

    tam = n;

    while (tam != 0) {
        int chuSo = tam % 10;
        sum += pow(chuSo, dem);
        tam /= 10;
    }

    if (n == sum) {
    	cout << n << " la so Armstrong.";
	} else {
    	cout << n << " khong phai la so Armstrong.";
	}
    return 0;
}
