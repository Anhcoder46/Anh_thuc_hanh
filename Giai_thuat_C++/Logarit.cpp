#include<iostream>
using namespace std;
// Tìm giá trị nguyên logarit cơ số 2 của n
int log2(int n) {
  if (n <= 1) {
    return 0;
  } else {
    return 1 + log2(n / 2);
  }
}

int main() {
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;

  if (n <= 0) {
    cout << "Khong co logarit cho so khong duong." << endl;
  } else {
    int log2N = log2(n);
    cout << "Logarit co so 2 cua n la: " << log2N << endl;
  }

  return 0;
}
