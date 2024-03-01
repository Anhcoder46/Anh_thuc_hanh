import java.util.Scanner;

public class bai5 {
    // Nhập số tự nhiên n rồi tính tổng (lưu ý phép chia các số nguyên):
    // S1 = 1 + 1/2 + 1/3 + 1/4 + ... 1/n (n > 0)
    // S2 = 1 + 2^2 + 3^2 + ... + n^2 (n > 0)
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Nhập số tự nhiên n
        System.out.print("Nhập số tự nhiên n: ");
        int n = scanner.nextInt();

        // Tính tổng S1
        double s1 = 0.0;
        for (int i = 1; i <= n; i++) {
            s1 += 1.0 / i;
        }

        // Tính tổng S2
        int s2 = 0;
        for (int i = 1; i <= n; i++) {
            s2 += i * i;
        }

        // Hiển thị kết quả
        System.out.printf("S1 = %.6f\n", s1);
        System.out.println("S2 = " + s2);
    }
}

/*Giải thích đoạn code Java trên:
1. Nhập thư viện:

import java.util.Scanner;

Dòng này import thư viện Scanner từ package java.util. Thư viện này cung cấp các phương thức để nhập dữ liệu từ bàn phím.

2. Lớp bai5:

public class bai5 {

Dòng này khai báo lớp public bai5. Đây là lớp chính của chương trình.

3. Phương thức main:

public static void main(String[] args) {

Dòng này khai báo phương thức main. Đây là phương thức khởi đầu của chương trình Java.

4. Nhập dữ liệu:

Scanner scanner = new Scanner(System.in);
Dòng này tạo một đối tượng Scanner mới với tên scanner. Đối tượng này được sử dụng để nhập dữ liệu từ bàn phím.

System.out.print("Nhập số tự nhiên n: ");
Dòng này in ra lời nhắc "Nhập số tự nhiên n: " ra màn hình.

int n = scanner.nextInt();
Dòng này sử dụng phương thức nextInt() của đối tượng scanner để nhập một số nguyên từ bàn phím và lưu trữ vào biến n.

5. Tính tổng:

Tính tổng S1:

double s1 = 0.0;
Dòng này khai báo biến s1 kiểu double và khởi tạo giá trị ban đầu là 0.0.

for (int i = 1; i <= n; i++) {
Vòng lặp for lặp từ 1 đến n.

s1 += 1.0 / i;
Dòng này cộng giá trị 1.0 / i (nghĩa là 1 chia cho i) vào biến s1.

Tính tổng S2:

int s2 = 0;
Dòng này khai báo biến s2 kiểu int và khởi tạo giá trị ban đầu là 0.

for (int i = 1; i <= n; i++) {
Vòng lặp for lặp từ 1 đến n.

s2 += i * i;
Dòng này cộng giá trị i * i (nghĩa là i bình phương) vào biến s2.

6. Hiển thị kết quả:

System.out.printf("S1 = %.6f\n", s1);
Dòng này sử dụng hàm printf() để in ra giá trị của s1 với định dạng 6 chữ số thập phân.

System.out.println("S2 = " + s2);
Dòng này in ra giá trị của s2 ra màn hình.

7. Kết thúc chương trình:

}

Dòng này đóng dấu ngoặc của phương thức main.

8. Giải thích chi tiết:

Lớp Scanner: Lớp Scanner cung cấp các phương thức để nhập dữ liệu từ bàn phím.
Phương thức main: Phương thức main là phương thức khởi đầu của chương trình Java.
Biến: Biến là một vị trí lưu trữ dữ liệu trong bộ nhớ.
Toán tử: Toán tử được sử dụng để thực hiện các phép toán trên dữ liệu.
**Hàm System.out.printf(): Hàm System.out.printf() được sử dụng để in dữ liệu ra màn hình với định dạng được chỉ định.
Vòng lặp for: Vòng lặp for được sử dụng để lặp lại một khối lệnh nhiều lần.
Ví dụ:

Nếu bạn nhập n = 5, chương trình sẽ in ra kết quả:

S1 = 1.640783
S2 = 55
Đọc thêm:

Lớp Scanner trong Java: [đã xoá URL không hợp lệ]
Phương thức main trong Java: [đã xoá URL không hợp lệ]
Biến trong Java: [đã xoá URL không hợp lệ]
Toán tử trong Java: [đã xoá URL không hợp lệ]
Hàm System.out.printf() trong Java: [đã xoá URL không hợp lệ]
Vòng lặp for trong Java: [đã xoá URL không hợp lệ]*/