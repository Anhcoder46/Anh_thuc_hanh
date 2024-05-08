#include <iostream>
using namespace std;

void xuatHien(int a[], int n) {
  int dem[10] = {0};
  
  for(int i=0; i<n; i++) {
    dem[a[i]]++; 
  }

  for(int i=0; i<10; i++) {
    if(dem[i] != 0) {
      cout << "So " << i << " xuat hien " << dem[i] << " lan" << endl;
    }
  }
}

int main() {

  int n;
  cout << "Nhap so phan tu cua mang: "; 
  cin >> n;

  int a[n];

  cout << "Nhap cac phan tu cua mang: " << endl;

  for(int i=0; i<n; i++) {
    cout << "a[" << i << "] = ";
    cin >> a[i];
  }

  cout << "Ket qua: " << endl;
  
  xuatHien(a, n);

  return 0;
}