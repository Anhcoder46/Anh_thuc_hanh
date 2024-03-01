import java.util.Scanner;

public class Bai1 {
    //Nhập 2 số nguyên a, b từ bàn phím. Tính tổng theo công thức S = a * a + b * b.
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a: ");
        int a = sc.nextInt();
        System.out.println("Nhập b: ");
        int b = sc.nextInt();

        int sum = a * a + b * b;
        System.out.println("Tổng S = " + sum);
    }
}


/*

public class Bai1 {

Dòng này khai báo lớp public Bai1. Đây là lớp chính của chương trình.

3. Phương thức main:

public static void main(String[] args) {

Dòng này khai báo phương thức main. Đây là phương thức khởi đầu của chương trình Java.

4. Nhập dữ liệu:

Scanner sc = new Scanner(System.in);

Dòng này tạo một đối tượng Scanner mới với tên sc. Đối tượng này được sử dụng để nhập dữ liệu từ bàn phím.

System.out.println("Nhập a: ");

Dòng này in ra lời nhắc "Nhập a: " ra màn hình.

int a = sc.nextInt();

Dòng này sử dụng phương thức nextInt() của đối tượng sc để nhập một số nguyên từ bàn phím và lưu trữ vào biến a.

System.out.println("Nhập b: ");

Dòng này in ra lời nhắc "Nhập b: " ra màn hình.

int b = sc.nextInt();

Dòng này sử dụng phương thức nextInt() của đối tượng sc để nhập một số nguyên từ bàn phím và lưu trữ vào biến b.

5. Tính toán:

int sum = a * a + b * b;

Dòng này tính tổng S theo công thức S = a * a + b * b.

6. In kết quả:

System.out.println("Tổng S = " + sum);

Dòng này in ra giá trị của biến sum (tổng S) ra màn hình.

7. Kết thúc chương trình:

}

Dòng này đóng dấu ngoặc của phương thức main.

8. Giải thích chi tiết:

Lớp Scanner: Lớp Scanner cung cấp các phương thức để nhập dữ liệu từ bàn phím. Các phương thức thường dùng bao gồm:
nextInt(): Nhập một số nguyên.
nextFloat(): Nhập một số thực.
nextLine(): Nhập một chuỗi.
Phương thức main: Phương thức main là phương thức khởi đầu của chương trình Java. Khi chương trình Java được chạy,
phương thức main sẽ được thực thi đầu tiên.
Biến: Biến là một vị trí lưu trữ dữ liệu trong bộ nhớ. Biến được khai báo bằng cách sử dụng tên biến và kiểu dữ liệu.
Ví dụ: int a; khai báo một biến a có kiểu dữ liệu int.
Toán tử: Toán tử được sử dụng để thực hiện các phép toán trên dữ liệu. Ví dụ: +, -, *, /.
**Hàm System.out.println(): Hàm System.out.println() được sử dụng để in dữ liệu ra màn hình.
Ví dụ:

Nếu bạn nhập a = 3 và b = 4, chương trình sẽ in ra kết quả:

Tổng S = 25
Đọc thêm:

Lớp Scanner trong Java: [đã xoá URL không hợp lệ]
Phương thức main trong Java: [đã xoá URL không hợp lệ]
Biến trong Java: [đã xoá URL không hợp lệ]
Toán tử trong Java: [đã xoá URL không hợp lệ]
Hàm System.out.println() trong Java: [đã xoá URL không hợp lệ]*/