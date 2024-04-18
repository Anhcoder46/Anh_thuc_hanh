#include<iostream>
using namespace std;
// Viết hàm đệ quy xác định chiều dài chuỗi
int length(string s) {
  if (s.empty()) {
    return 0;
  } else {
    return 1 + length(s.substr(1));
  }
}

int main() {
  string s;
  cout << "Nhap chuoi s: ";
  getline(cin, s);

  int len = length(s);
  cout << "Chieu dai cua chuoi s la: " << len << endl;

  return 0;
}
