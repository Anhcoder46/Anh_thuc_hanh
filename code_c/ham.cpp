#include<iostream>
#include<string>
using namespace std;
int cong(int a, int b) {
	return a + b;
}
int main() {
	int a(5);
	int b(6);
	cout << cong(a, cong(a,b)) << endl;
	cout << cong(++a, ++b);
	return 0;
}