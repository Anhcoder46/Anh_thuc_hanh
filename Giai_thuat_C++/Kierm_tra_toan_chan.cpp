#include<iostream>
using namespace std;
// Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay ko
bool ktToanChan(int n) {
  if (n == 0) {
    return true;
  } else {
    int so = n % 10;
    if (so % 2 != 0) {
      return false;
    } else {
      return ktToanChan(n / 10);
    }
  }
}

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;

  bool temp = ktToanChan(n);
  if (temp) {
    cout << "So co toan chu so chan" << endl;
  } else {
    cout << "So khong co toan chu so chan" << endl;
  }
  return 0;
}
