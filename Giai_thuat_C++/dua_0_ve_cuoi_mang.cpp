#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Nhap kich thuoc mang: ";
  cin >> n;

  int arr[n];

  cout << "Nhap cac phan tu cua mang: " << endl;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = 0;

  for(int i = 0; i < n; i++) {
    if(arr[i] != 0) {
      swap(arr[i], arr[count]);
      count++;
    }
  }

  cout << "Chuyen: " << endl; 
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}