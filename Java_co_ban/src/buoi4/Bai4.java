package buoi4;

import java.util.Scanner;

public class Bai4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Nhập vào giá trị byte: ");
            byte n = Byte.parseByte(sc.nextLine());
            System.out.println("Giá trị byte: " + n);
        } catch (NumberFormatException e) {
            System.out.println("Lỗi: " + e.getMessage());
        }
    }
}
/*
Giải thích:
Chương trình sử dụng Scanner để nhập vào giá trị từ người dùng.
Khối Try cố gắng chuyển đổi chuỗi nhập vào sang kiểu byte.
Nếu thành công, giá trị byte sẽ được in ra.
Nếu chuỗi không hợp lệ, ngoại lệ NumberFormatException sẽ được ném ra.
Khối Catch sẽ in ra thông báo lỗi.

Kết luận:
Xử lý ngoại lệ là một phần quan trọng trong lập trình Java.
Khối lệnh Try-Catch giúp bạn kiểm soát và xử lý các lỗi một cách hiệu quả,
giúp chương trình hoạt động ổn định và thân thiện với người dùng.


Ngoại lệ (Exception) là những sự cố bất ngờ xảy ra trong quá trình thực thi chương trình,
khiến chương trình ngừng hoạt động bình thường. Java cung cấp cơ chế xử lý ngoại lệ để giúp lập trình viên
kiểm soát và xử lý các lỗi này một cách hiệu quả.

Khối lệnh Try: chứa các mã có thể gây ra ngoại lệ.
Khối lệnh Catch: được thực thi khi một ngoại lệ được ném ra từ khối Try.
Exception_class_name: là tên của lớp ngoại lệ mà bạn muốn xử lý.
Biến e: lưu trữ thông tin về ngoại lệ đã xảy ra.


try {
  byte number = Byte.parseByte("123");
  System.out.println("Giá trị byte: " + number);
} catch (NumberFormatException e) {
  System.out.println("Lỗi: " + e.getMessage());
}
Giải thích:
Khối Try cố gắng chuyển đổi chuỗi "123" sang kiểu byte.
Nếu thành công, giá trị byte sẽ được in ra.
Nếu chuỗi không hợp lệ, ngoại lệ NumberFormatException sẽ được ném ra.
Khối Catch sẽ in ra thông báo lỗi.
*/