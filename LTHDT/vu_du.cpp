#include<iostream>
#include<string>
#include<math.h>
using namespace std;
bool snt(int n) {
	if(n < 2)
	return false;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

int main(void) {
    int n;
    cout << "Nhap n: ";
    cin >> n;
  for(int i = 0; i <= n; i++) {
  	if(snt(i)) {
  		cout << "So " << i << " la so nguyen to." << endl;
	  }
  }
    return 0;
} 