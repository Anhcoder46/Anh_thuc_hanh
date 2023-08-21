#include<iostream>
using namespace std;
int main() {
	int ngay{0}, thang{0}, nam{0};
	/*cin >> ngay >> thang >> nam;
	cout << ngay << "/" << thang << "/" << nam << endl;*/
	fflush(stdin);
		cin.ignore(1000,'\n');
		cin >> ngay >> thang >> nam;
		cout << ngay << "/" << thang << "/" << nam << endl;
	return 0;
}