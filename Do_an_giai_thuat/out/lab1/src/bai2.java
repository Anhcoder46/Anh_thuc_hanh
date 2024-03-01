import java.util.Scanner;

public class bai2 {
    // Chuyển đổi từ nhiệt độ Fahreneit sang Celsius theo công thức
    // C = 5 * (F - 32) - 9 với C, F: nhiệt độ F
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập nhiệt độ Fahreneit cần đổi: ");
        double f = sc.nextDouble();
        double c = 5 * (f - 32) - 9;
        System.out.printf("%.2f độ Fahrenheit tương đương %.2f độ Celsius\n", f, c);
    }
}

/*Giải thích đoạn code Java trên:
1. Nhập thư viện:

import java.util.Scanner;

Dòng này import thư viện Scanner từ package java.util. Thư viện này cung cấp các phương thức để nhập dữ liệu từ bàn phím.

2. Lớp bai2:

public class bai2 {

Dòng này khai báo lớp public bai2. Đây là lớp chính của chương trình.

3. Phương thức main:

public static void main(String[] args) {

Dòng này khai báo phương thức main. Đây là phương thức khởi đầu của chương trình Java.

4. Nhập dữ liệu:

Scanner sc = new Scanner(System.in);

Dòng này tạo một đối tượng Scanner mới với tên sc. Đối tượng này được sử dụng để nhập dữ liệu từ bàn phím.

System.out.println("Nhập nhiệt độ Fahreneit cần đổi: ");

Dòng này in ra lời nhắc "Nhập nhiệt độ Fahreneit cần đổi: " ra màn hình.

double f = sc.nextDouble();

Dòng này sử dụng phương thức nextDouble() của đối tượng sc để nhập một số thực từ bàn phím và lưu trữ vào biến f.

5. Tính toán:

double c = 5 * (f - 32) - 9;

Dòng này tính toán nhiệt độ Celsius c từ nhiệt độ Fahrenheit f theo công thức C = 5 * (F - 32) - 9.

6. In kết quả:

System.out.printf("%.2f độ Fahrenheit tương đương %.2f độ Celsius\n", f, c);

Dòng này sử dụng hàm printf() để in ra giá trị của biến f (nhiệt độ Fahrenheit) và c (nhiệt độ Celsius)
ra màn hình với định dạng hai chữ số thập phân.

7. Kết thúc chương trình:

}

Dòng này đóng dấu ngoặc của phương thức main.

8. Giải thích chi tiết:

Lớp Scanner: Lớp Scanner cung cấp các phương thức để nhập dữ liệu từ bàn phím. Các phương thức thường dùng bao gồm:
nextInt(): Nhập một số nguyên.
nextFloat(): Nhập một số thực.
nextLine(): Nhập một chuỗi.
Phương thức main: Phương thức main là phương thức khởi đầu của chương trình Java.
Khi chương trình Java được chạy, phương thức main sẽ được thực thi đầu tiên.
Biến: Biến là một vị trí lưu trữ dữ liệu trong bộ nhớ. Biến được khai báo bằng cách sử dụng tên biến và kiểu dữ liệu.
Ví dụ: double f; khai báo một biến f có kiểu dữ liệu double.
Toán tử: Toán tử được sử dụng để thực hiện các phép toán trên dữ liệu. Ví dụ: +, -, *, /.
**Hàm System.out.printf(): Hàm System.out.printf() được sử dụng để in dữ liệu ra màn hình với định dạng được chỉ định.
Ví dụ:

Nếu bạn nhập f = 212, chương trình sẽ in ra kết quả:

212.00 độ Fahrenheit tương đương 100.00 độ Celsius
Đọc thêm:

Lớp Scanner trong Java: [đã xoá URL không hợp lệ]
Phương thức main trong Java: [đã xoá URL không hợp lệ]
Biến trong Java: [đã xoá URL không hợp lệ]
Toán tử trong Java: [đã xoá URL không hợp lệ]
Hàm System.out.printf() trong Java: [đã xoá URL không hợp lệ]*/