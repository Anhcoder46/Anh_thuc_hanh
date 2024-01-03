#include <iostream>
using namespace std;

// Lớp cơ sở đại diện cho chuỗi S(n)
class Series {
public:
    // Phương thức ảo để tính giá trị của mục trong chuỗi
    virtual int calculateTerm(int n) = 0;

    // Phương thức để tính tổng của chuỗi S(n)
    int calculateSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += calculateTerm(i);
        }
        return sum;
    }
};

// Lớp con đại diện cho một mục trong chuỗi
class Term : public Series {
public:
    // Phương thức tính giá trị của mục thứ n trong chuỗi
    int calculateTerm(int n) override {
        int term = 1;
        for (int i = 1; i <= n; i++) {
            term *= i;
        }
        return term;
    }
};

int main() {
    // Tạo một đối tượng Term
    Term term;

    // Nhập giá trị n
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Tính tổng của chuỗi S(n) và hiển thị kết quả
    int sum = term.calculateSum(n);
    cout << "Tong cua chuoi S(" << n << ") la: " << sum << endl;

    return 0;
}