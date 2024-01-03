#include<iostream>
#include<cmath>

using namespace std;

// Khai báo lớp Diem
class Diem {
protected:
    float x, y;

public:
    Diem(float hoanh = 0, float tung = 0);
    float getX() const;
    float getY() const;
    void NhapToaDo(istream& in = cin);
    void XuatToaDo(ostream& out = cout) const;

    // Chồng toán tử so sánh
    bool operator==(const Diem& other) const;
};

Diem::Diem(float hoanh, float tung) : x(hoanh), y(tung) {}

float Diem::getX() const {
    return x;
}

float Diem::getY() const {
    return y;
}

void Diem::NhapToaDo(istream& in) {
    cout << "\nNhap hoanh do x: ";
    in >> x;
    cout << "\nNhap tung do y: ";
    in >> y;
}

void Diem::XuatToaDo(ostream& out) const {
    out << '(' << x << ',' << y << ')';
}

bool Diem::operator==(const Diem& other) const {
    return (x == other.x) && (y == other.y);
}

// Khai báo lớp TamGiac kế thừa từ Diem
class TamGiac : public Diem {
private:
    Diem A, B, C;

public:
    TamGiac(const Diem& pointA, const Diem& pointB, const Diem& pointC);
    bool KiemTraDiemCoNamTrongTamGiac(const Diem& P) const;
};

TamGiac::TamGiac(const Diem& pointA, const Diem& pointB, const Diem& pointC)
    : A(pointA), B(pointB), C(pointC) {}

// Hàm tính diện tích tam giác dựa trên 3 điểm
float TinhDienTich(const Diem& A, const Diem& B, const Diem& C) {
    return 0.5 * abs(A.getX() * (B.getY() - C.getY()) +
                    B.getX() * (C.getY() - A.getY()) +
                    C.getX() * (A.getY() - B.getY()));
}

// Hàm kiểm tra một điểm có nằm trong tam giác không
bool TamGiac::KiemTraDiemCoNamTrongTamGiac(const Diem& P) const {
    float ABC = TinhDienTich(A, B, C);
    float PAB = TinhDienTich(P, A, B);
    float PBC = TinhDienTich(P, B, C);
    float PCA = TinhDienTich(P, C, A);

    return abs(ABC - (PAB + PBC + PCA)) < 0.0001;
}

int main() {
    Diem A, B, C, P;

    cout << "Nhap diem A cua tam giac: ";
    A.NhapToaDo();

    cout << "\nNhap diem B cua tam giac: ";
    B.NhapToaDo();

    cout << "\nNhap diem C cua tam giac: ";
    C.NhapToaDo();

    TamGiac tamGiac(A, B, C);

    cout << "\nNhap diem P can kiem tra: ";
    P.NhapToaDo();

    if (tamGiac.KiemTraDiemCoNamTrongTamGiac(P)) {
        cout << "Diem P nam trong tam giac." << endl;
    } else {
        cout << "Diem P nam ngoai tam giac." << endl;
    }

    return 0;
}