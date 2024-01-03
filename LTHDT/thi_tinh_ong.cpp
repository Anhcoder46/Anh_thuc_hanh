#include<iostream>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	while(n != 0) {
		int temp = n % 10;
		n = n / 10;
		if(temp % 2 != 0 || temp % 4 == 0) {
			sum = sum + temp;
		}
	}
	cout << sum;
}