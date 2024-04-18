#include<iostream>
using namespace std;
// Tím ước chung lớn nhất của 2 số nguyên a, b
int ucln(int a, int b) {
  if(b == 0) {
    return a;
  } else if(b == 0) {
  		return a;
	} else {
  		return ucln(b, a % b);
	}
}

int main() {
  int a, b;
  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;

  int so = ucln(a, b);
  cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << so << endl;

  return 0;
}
