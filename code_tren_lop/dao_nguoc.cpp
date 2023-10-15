#include <iostream>
using namespace std;
int f(int n, int tam) {
	if(n == 0)
		return tam;
	tam = tam * 10 + n % 10;
	return f(n / 10, tam);
}
int main() {
	int n = 0;
	cin >> n;
	cout << f(n, 0);
	return 0;
}