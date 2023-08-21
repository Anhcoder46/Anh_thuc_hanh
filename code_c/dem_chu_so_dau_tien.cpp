#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n(0), du(0), dem(0);
	while(n == 0)
		cin >> n;
		int tam = n;
		int So_dau_tien = 0;
		while(n != 0) {
			du = n % 10;
			n = n / 10;
		}
		So_dau_tien = du;
		while(tam != 0) {
			du = tam % 10;
			if(So_dau_tien == du)
			dem++;
			tam = tam / 10;
		}
		cout << "So dau tien la: " << dem;
		return 0;
}