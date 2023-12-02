#include <iostream>
using namespace std;

// Lớp cơ sở đại diện cho việc tính GCD
class GCD {
public:
    // Phương thức ảo để tính GCD của hai số
    virtual int calculate(int a, int b) = 0;
};

// Lớp con đại diện cho việc tính GCD bằng thuật toán Euclid
class EuclideanGCD : public GCD {
public:
    // Phương thức tính GCD của hai số bằng thuật toán Euclid
    int calculate(int a, int b) override {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

// Lớp con đại diện cho việc tính GCD bằng phép chia đệ quy
class RecursiveGCD : public GCD {
public:
    // Phương thức tính GCD của hai số bằng phép chia đệ quy
    int calculate(int a, int b) override {
        if (b == 0) {
            return a;
        }
        return calculate(b, a % b);
    }
};

int main() {
    // Tạo một đối tượng EuclideanGCD
    EuclideanGCD euclideanGCD;

    // Nhập hai số nguyên dương
    int a, b;
    cout << "Nhap hai so nguyen duong:\n";
    cout << "So thu nhat: ";
    cin >> a;
    cout << "So thu hai: ";
    cin >> b;

    // Tính GCD của hai số bằng thuật toán Euclid và hiển thị kết quả
    int gcd = euclideanGCD.calculate(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << gcd << endl;

    // Tạo một đối tượng RecursiveGCD
    RecursiveGCD recursiveGCD;
    return 0;
}