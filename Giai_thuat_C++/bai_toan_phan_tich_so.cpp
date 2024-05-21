//Lab7.4: Bài toán Phân tích số
#include<iostream>
using namespace std;
int n, a[100];
void hienthi(int n) {
	cout << "(";
	for(int i = 1; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << a[n] << ") " << endl;
}

void Try(int i, int k, int cursum) {
	for(int j = k; j >= 1; j--) {
		if(cursum + j <= n) {
			a[i] = j;
			cursum += j;
			if(cursum == n) {
				hienthi(i);
			} else {
				Try(i + 1, j, cursum);
			}
			cursum -= j;
		}
	}
}

int main() {
	cout << "Nhap n: ";
	cin >> n;
	Try(1, n, 0);
	cout << endl;
	return 0;
}
