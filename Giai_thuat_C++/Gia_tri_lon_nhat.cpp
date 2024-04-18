#include<iostream>
using namespace std;
// Tìm chữ số có giá trị lớn nhất của số nguyên dương n
int maxDigit(int n) {
  if (n == 0) {
    return 0;
  } else {
    int currentDigit = n % 10;
    int maxDigitRest = maxDigit(n / 10);
    return max(currentDigit, maxDigitRest);
  }
}

int main() {
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;

  int maxDigitN = maxDigit(n);
  cout << "Chu so lon nhat cua n la: " << maxDigitN << endl;

  return 0;
}
