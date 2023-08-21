#include<stdio.h>
int main() {
	int n;
	int m;
	if (n < 2)
		m = 2;
	else if (n % 2 == 0 && n % 3 != 0)
		m = n / 3 + 1;
	else if (n % 2 != 0 && n % 3 == 0)
		m = n / 3;
	else if (n % 2 == 0 && n % 3 == 0)
		m = n / 3 + 1;
	else
		m = n / 3 + 1;
return 0;
}