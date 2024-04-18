#include<iostream>
using namespace std;
// Tìm chữ số đầu tiên của số nguyên dương n


int dauTien(int n) {
  if (n == 0) {
    return 0;
  } else if (n < 10) {
    return n;
  } else {
    return dauTien(n / 10);
  }
}


int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;

  int so = dauTien(n);
  cout << "Chu so dau tien cua n la: " << so << endl;

  return 0;
}
