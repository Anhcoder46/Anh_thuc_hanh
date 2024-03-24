#include<iostream>
using namespace std;
int main() {
	int x, sum = 0;
	cin >> x;
	if(x % 2 == 0) {
		int tam = sum % 10;
	
		sum /= 10;
	}	sum += x;
	cout << sum;
}