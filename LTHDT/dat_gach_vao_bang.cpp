#include<iostream>
using namespace std;
int getNoOfWays(int n) {
	if(n <= 2) {
		return n;
		return getNoOfWays(n - 1) + getNoOfWays(n - 2);
	}
}
	int main() {
		int n;
		cin >> n;
		cout << getNoOfWays(n) << endl;
		return 0;
	}