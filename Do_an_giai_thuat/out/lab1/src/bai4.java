import java.util.Scanner;

public class bai4 {
    //Nhập vào x giây. Quy đổi ra a giờ b phút c giây
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập số giây: ");
        int giay = sc.nextInt();
        int gio = giay / 3600;
        int phut = (giay - gio * 3600) / 60;
        int doi = giay - gio * 3600 - phut * 60;
        System.out.println(giay + " giây bằng " + gio + " giờ " + phut + " phút " + doi + " giây");
    }
}

/*Giải thích đoạn code Java trên:
1. Nhập thư viện:

import java.util.Scanner;

Dòng này import thư viện Scanner từ package java.util. Thư viện này cung cấp các phương thức để nhập dữ liệu từ bàn phím.

2. Lớp bai4:

public class bai4 {

Dòng này khai báo lớp public bai4. Đây là lớp chính của chương trình.

3. Phương thức main:

public static void main(String[] args) {

Dòng này khai báo phương thức main. Đây là phương thức khởi đầu của chương trình Java.

4. Nhập dữ liệu:

Scanner sc = new Scanner(System.in);
System.out.println("Nhập số giây: ");
int giay = sc.nextInt();
Những dòng này tạo đối tượng Scanner và nhập giá trị của biến giay (số giây) từ bàn phím.

5. Quy đổi giây ra giờ, phút, giây:

int gio = giay / 3600;
Dòng này tính số giờ gio bằng cách chia số giây giay cho số giây trong một giờ (3600).

int phut = (giay - gio * 3600) / 60;
Dòng này tính số phút phut bằng cách chia số giây còn lại sau khi trừ đi số giây tương ứng với số giờ gio cho số giây trong một phút (60).

int doi = giay - gio * 3600 - phut * 60;
Dòng này tính số giây doi còn lại sau khi đã chia hết cho số giờ và số phút.

6. In kết quả:

System.out.println(giay + " giây bằng " + gio + " giờ " + phut + " phút " + doi + " giây");

Dòng này in ra giá trị của giay, gio, phut, doi theo định dạng "số giây bằng số giờ giờ số phút phút số giây giây".

7. Kết thúc chương trình:

}

Dòng này đóng dấu ngoặc của phương thức main.

8. Giải thích chi tiết:

Lớp Scanner: Lớp Scanner cung cấp các phương thức để nhập dữ liệu từ bàn phím.
Phương thức main: Phương thức main là phương thức khởi đầu của chương trình Java.
Biến: Biến là một vị trí lưu trữ dữ liệu trong bộ nhớ.
Toán tử: Toán tử được sử dụng để thực hiện các phép toán trên dữ liệu.
**Hàm System.out.println(): Hàm System.out.println() được sử dụng để in dữ liệu ra màn hình.
Ví dụ:

Nếu bạn nhập giay = 10000, chương trình sẽ in ra kết quả:

10000 giây bằng 2 giờ 46 phút 40 giây
Đọc thêm:

Lớp Scanner trong Java: [đã xoá URL không hợp lệ]
Phương thức main trong Java: [đã xoá URL không hợp lệ]
Biến trong Java: [đã xoá URL không hợp lệ]
Toán tử trong Java: [đã xoá URL không hợp lệ]
Hàm System.out.println() trong Java: [đã xoá URL không hợp lệ]
Lưu ý:

Đoạn code này chỉ hoạt động với số nguyên dương.*/
