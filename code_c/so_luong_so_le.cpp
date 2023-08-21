#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int count = 0;
	while(n != 0) {
		int temp = n % 10;
		if(temp % 2 == 1)
		count++;
		n /= 10;
	}
	cout << "So luong cac chu so le la: " << count << endl;
	return 0;
}