package buoi2;

import java.util.Scanner;

public class KiemTraKyTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char k = sc.nextLine().charAt(0);
        if(k == 'a' || k == 'A') {
            System.out.println("Đây là ký tự chữ a/A");
        } else {
            System.out.println("Đây không phải ký tự chữ a/A");
        }
    }
}