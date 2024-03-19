// Nhập số nguyên a hệ thập phân. Đổi qua nhị phân
#include <iostream>

using namespace std;
int main() {
  int a, tam = 0, dem = 1;
  cout << "Nhap so nguyen a: ";
  cin >> a;//12

  while (a > 0) {
    tam += (a % 2) * dem;
    a /= 2;
    dem *= 10;
  }

  cout << "Nhi phan la: " << tam << endl;
  return 0;
}