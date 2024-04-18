#include<iostream>
using namespace std;
// Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay ko
bool isAllEven(int n) {
  if (n == 0) {
    return true;
  } else {
    int lastDigit = n % 10;
    if (lastDigit % 2 != 0) {
      return false;
    } else {
      return isAllEven(n / 10);
    }
  }
}

int main() {
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;

  bool allEven = isAllEven(n);
  if (allEven) {
    cout << "So n co toan chu so chan." << endl;
  } else {
    cout << "So n khong co toan chu so chan." << endl;
  }

  return 0;
}
