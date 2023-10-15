#include <iostream>

using namespace std;

int max(int n) {

  if (n < 10) {
    return n;
  }

  int digit = n % 10;

  int max_other = max(n / 10);

  if (digit > max_other) {
    return digit;
  } else {
    return max_other;
  }
}

int main() {
  int n;
  cin >> n;
  cout << max(n);
  return 0;
}