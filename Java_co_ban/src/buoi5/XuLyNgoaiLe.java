package buoi5;

import java.util.InputMismatchException;
import java.util.Scanner;

public class XuLyNgoaiLe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0, a =0;
        System.out.println("Nhập vào một số: ");
//        x = sc.nextByte();
        try {
            x = sc.nextByte();
            x = (byte) 10/a;
        } catch (InputMismatchException e1) {
            System.out.println("Có lỗi xảy ra: " + e1);
        } catch (java.lang.ArithmeticException e2) {
            System.out.println("Lỗi chia cho 0");
        } finally {
            sc.close();
        }
        System.out.println("Gía trị của x là: " + x);
    }
}
