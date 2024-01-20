package buoi1;

import java.util.Scanner;

public class Baitap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Nhập liệu tên
        System.out.println("Nhập tên của bạn: ");
        String name = sc.nextLine();

        // In ra tên
        System.out.println("Xin chào " + name);
        System.out.println("Xin chào " + name + "\t");
        System.out.println("Xin chào " + name + "!");

        // Nhập liệu ký tự chữ thường
        System.out.println("Nhập một ký tự chữ thường: ");
        char kyTuThuong = sc.next().charAt(0);

        // Chuyển chữ thường sang chữ hoa
        char kyTuHoa = Character.toUpperCase(kyTuThuong);

        // In ra ký tự chữ hoa tương ứng
        System.out.println("Ký tự chữ hoa tương ứng là: " + kyTuHoa);
    }
}