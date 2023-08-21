//Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main() {
	//write C++ code here
	int d = 100000; //1m = 0.1mm
	int i = 0;
	while((1 << i) < d)//2^i < 10000;
	i++;
	cout << i;
}
