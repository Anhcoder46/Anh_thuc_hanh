/* 
	Ngan x?p - Stack
*/
#include<iostream>
#include"stack2.h"
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	initS();
	while(n != 0) {
		pushS(n % 2);
		n = n / 2;
	}
	int x = 0;
	while(!emptyS()) {
		popS(x);
		cout << x;
	}
	return 0;
}