#include<iostream>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
void printDate(date a) {
	cout << a.day << "/" << a.month << "/" << a.year << endl;
}
void incDate(date &a, int x) {
	a.day += x;
}
int main() {
	date today{16,5,2004};
	today.day = 16;
	today.month = 5;
	today.year = 2004;
	printDate(today);
	incDate(today,5);
	printDate(today);
	return 0;
}