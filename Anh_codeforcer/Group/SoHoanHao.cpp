#include <iostream>
#include <cmath>
using namespace std;
bool SoHoanHao(int n) {
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            if(i == (n / i)) {
                sum += i;
            } else {
                sum += (i + n/i);
            }
        }
    }
    return sum == n && n != 1;
}

int main() {
    int n;
    cin >> n;
    if(SoHoanHao(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
