// Nhập số nguyên a hệ thập phân. Đổi qua nhị phân
#include <iostream>

using namespace std;
int main() {
//  int a, tam = 0, dem = 1;
//  cout << "Nhap so nguyen a: ";
//  cin >> a;
//
//  while (a > 0) {
//    tam = tam + (a % 2) * dem;
//    a = a / 2;
//    dem *= 10;
//  }
//
//  cout << "Nhi phan la: " << tam << endl;
//  return 0;
//}

int x = 100;
int sum = 0;
while (x > 0) {
    sum += x;
    x--;
	}
    cout << sum;
    return 0;
}

