#include<iostream>
using namespace std;

int main() {
    int n, tam, temp;
    cout << "Nhap so nguyen: ";
    cin >> n;
    while (n != 0) {
        tam = n % 10;
        temp = temp * 10 + tam;
        n = n / 10;
    }
    cout << temp << " * " << endl;
    
    return 0;
}