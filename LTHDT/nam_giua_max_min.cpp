#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	cout << "C= ";
	cin >> c;
	if(a <= b && a >= c || a >= b && a <= c) cout << a;
	if(b >= a && b <= c|| b <= a && b >= c) cout << b;
	if(c >= b && c <= a || c <= b && c >= a) cout << c;
	return 0;
}