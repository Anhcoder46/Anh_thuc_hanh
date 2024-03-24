#include <iostream>
#include <cmath>
using namespace std;

double DienTichTamGiac(int x1, int y1, int x2, int y2, int x3, int y3) {
    double DienTich = abs(0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
    return DienTich;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double DienTich = DienTichTamGiac(x1, y1, x2, y2, x3, y3);

    if(DienTich == 0) {
        cout << -1 << endl;
    } else {
        printf("%.6f\n", DienTich);
    }

    return 0;
}
