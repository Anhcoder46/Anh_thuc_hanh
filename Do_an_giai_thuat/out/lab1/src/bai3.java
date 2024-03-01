import java.util.Scanner;

public class bai3 {
    // Nhập 3 số nguyên a, b, c. Tìm số lớn nhất
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a: ");
        int a = sc.nextInt();
        System.out.println("Nhập b: ");
        int b = sc.nextInt();
        System.out.println("Nhập c: ");
        int c = sc.nextInt();
        int max = Math.max(a, Math.max(b, c));
        System.out.println("Số lớn nhất: " + max);
    }
}

/*Giải thích đoạn code Java trên:
1. Nhập thư viện:

import java.util.Scanner;

Dòng này import thư viện Scanner từ package java.util. Thư viện này cung cấp các phương thức để nhập dữ liệu từ bàn phím.

2. Lớp bai3:

public class bai3 {

Dòng này khai báo lớp public bai3. Đây là lớp chính của chương trình.

3. Phương thức main:

public static void main(String[] args) {

Dòng này khai báo phương thức main. Đây là phương thức khởi đầu của chương trình Java.

4. Nhập dữ liệu:

Scanner sc = new Scanner(System.in);
System.out.println("Nhập a: ");
int a = sc.nextInt();
System.out.println("Nhập b: ");
int b = sc.nextInt();
System.out.println("Nhập c: ");
int c = sc.nextInt();
Những dòng này tương tự với đoạn code trước, tạo đối tượng Scanner và nhập giá trị của 3 biến a, b, c từ bàn phím.

5. Tìm số lớn nhất:

int max = Math.max(a, Math.max(b, c));

Dòng này sử dụng phương thức max lớp Math để tìm số lớn nhất trong 3 số a, b, và c.

Hàm Math.max(a, b): Trả về giá trị lớn hơn giữa a và b.
Do đó, Math.max(a, Math.max(b, c)) sẽ tìm số lớn nhất giữa a và kết quả của max(b, c).
6. In kết quả:

System.out.println("Số lớn nhất: " + max);

Dòng này in ra giá trị của biến max (số lớn nhất) ra màn hình.

7. Kết thúc chương trình:

}

Dòng này đóng dấu ngoặc của phương thức main.

8. Giải thích chi tiết:

Lớp Scanner: Lớp Scanner cung cấp các phương thức để nhập dữ liệu từ bàn phím.
Phương thức main: Phương thức main là phương thức khởi đầu của chương trình Java.
Biến: Biến là một vị trí lưu trữ dữ liệu trong bộ nhớ.
Toán tử: Toán tử được sử dụng để thực hiện các phép toán trên dữ liệu.
**Hàm System.out.println(): Hàm System.out.println() được sử dụng để in dữ liệu ra màn hình.
Lớp Math: Lớp Math cung cấp các hằng số và phương thức toán học.
Phương thức Math.max(a, b): Trả về giá trị lớn hơn giữa a và b.
Ví dụ:

Nếu bạn nhập a = 5, b = 8, và c = 2, chương trình sẽ in ra kết quả:

Số lớn nhất: 8
Đọc thêm:

Lớp Scanner trong Java: [đã xoá URL không hợp lệ]
Phương thức main trong Java: [đã xoá URL không hợp lệ]
Biến trong Java: [đã xoá URL không hợp lệ]
Toán tử trong Java: [đã xoá URL không hợp lệ]
Hàm System.out.println() trong Java: [đã xoá URL không hợp lệ]
Lớp Math trong Java: [đã xoá URL không hợp lệ]
Phương thức Math.max() trong Java: [đã xoá URL không hợp lệ]*/
