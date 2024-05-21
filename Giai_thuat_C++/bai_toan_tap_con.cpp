//Đề: Liệt kê các tập con K phần tử
#include<iostream>
using namespace std;
int n, k, a[100];
void nCk(int i) {
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k) {
			for(int j = 1; j < k; j++){
				cout << a[j] << ";";
			}
			cout << a[k] << endl;
		} else {
			nCk(i + 1);
		}
	}
}
int main() {
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
	a[0] = 0;
	nCk(1);
}	
