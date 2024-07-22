#include <iostream>

using namespace std;

bool isPalindrome(int n) {
  if (n < 0) {
    return false;
  }

  int reversedNum = 0, temp = n;
  while (temp > 0) {
    int lastDigit = temp % 10;
    reversedNum = reversedNum * 10 + lastDigit;
    temp /= 10;
  }

  return n == reversedNum;
}

int main() {
  int n;
  cout << "Nhap so nguyen n: ";
  cin >> n;

  if (isPalindrome(n)) {
    cout << n << " la so doi xung" << endl;
  } else {
    cout << n << " khong phai la so doi xung" << endl;
  }

  return 0;
}