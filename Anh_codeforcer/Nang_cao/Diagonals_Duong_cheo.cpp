#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, k;
		cin >> n >> k;
		int diag = k / n; 
		int rem = k % n;
		if(rem == 0) {
			cout << diag << endl;
		}
		else {
			cout << diag + 1 << endl;	
		}
	}
	return 0;
}