#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	// in cac so chan tu 1 - 1000
	for(int i = 2; i <= 1000; i++) {
		if(i % 2 ==0) {
		cout << setw(4) << i;
		}
		if(i % 20 == 0) {
			cout << endl;
		}
	}
	return 0;
}