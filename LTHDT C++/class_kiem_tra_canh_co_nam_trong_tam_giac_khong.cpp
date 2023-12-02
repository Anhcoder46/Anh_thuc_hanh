#include <iostream>
#include <cmath>
using namespace std;

class Point { 
	// tạo lớp Point đại diện cho 1 điểm có 2 thuộc tính x, y
public:
    double x, y;
};

class Triangle {
	// tạo lớp Triangle đại diện cho 1 tam giác có 3 thuộc tính A, B, C đại diện cho 3 dỉnh của 1 tam giác
public:
    Point A, B, C;
	
	// method sử dụng để tính diện tích tam giác (Heron)
    double area() {
        double a = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
        double b = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
        double c = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

	/* method kiểm tra xem điểm P có nằm trong tam giác hay không
		method này tính diện tích của tam giác ABC (cha)
			và 3 tam gaisc con (PAB, PBC, PCA)(3con)
				nếu tổng của (3con) = (cha) => P nằm trong tam giác*/
    bool contains(Point P) {
        double ABC = area();

        double PAB = TriangleArea(P, A, B);
        double PBC = TriangleArea(P, B, C);
        double PCA = TriangleArea(P, C, A);

        return abs(ABC - (PAB + PBC + PCA)) < 0.0001;
    }

private:
	/*private method sử dụng để tính diện tích của tam gaics dựa trên
		tọa độ 3 đỉnh A, B, C (cũng sử dụng định lý Heron để tính diện
			tích tam giác)*/
    double TriangleArea(Point A, Point B, Point C) {
        return 0.5 * abs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
    }
};

int main() {
    Point P; // 1 điểm
    Triangle T; // 1 tam giác

    cout << "Nhap toa do diem P: ";
    cin >> P.x >> P.y;

    cout << "Nhap toa do cua tam giac T:" << endl; 
    // nhập tọa độ 3 đỉnh của tam giác T và lưu gái trị
    cout << "A: "; cin >> T.A.x >> T.A.y;
    cout << "B: "; cin >> T.B.x >> T.B.y;
    cout << "Ket qua: "; cin >> T.C.x >> T.C.y;

	//kiểm tra
    if (T.contains(P)) {
        cout << "Diem P nam trong tam giac T." << endl;
    } else {
        cout << "Diem P nam ngoai tam giac T." << endl;
    }

    return 0; // trả về 0 và kết thúc chương trình
}


/* 1 bài làm mất 6h, bn báo quá, mà công nhận bài này hơi ... (Đơnnn gioảng) kkk*/