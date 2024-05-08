#include <iostream>
using namespace std;
//in ra các số bị trùng lặp
void nhap(int a[], int n) {
	for(int i = 0; i < n; i++) {
    	cout << "a[" << i << "] = ";
    	cin >> a[i];
  }
}

void trungLap(int a[], int n) {
	cout << "Cac phan tu bi trung lap: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }
} 

int main() {
  int n;
  cout << "Nhap kich thuoc cua mang: "; 
  cin >> n;
  int a[n];
  cout << "Nhap cac phan tu cua mang: " << endl;
  nhap(a,n);
  trungLap(a, n);
  return 0;
}