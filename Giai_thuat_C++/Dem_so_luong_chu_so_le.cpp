#include<iostream>
using namespace std;
// Hãy đếm số lượng chữ số lẻ của số nguyên dương n
int countOddDigits(int n) {
  if (n == 0) {
    return 0;
  }

  int count = n % 2 == 1 ? 1 : 0;
  return count + countOddDigits(n / 10);
}

int main() {
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;

  int oddDigitCount = countOddDigits(n);
  cout << "So luong chu so le cua " << n << " la: " << oddDigitCount << endl;

  return 0;
}
