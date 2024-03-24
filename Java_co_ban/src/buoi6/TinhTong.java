package buoi6;

import java.util.Scanner;

public class TinhTong {
    public static int tongNSo(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập số tự nhiên n: ");
        int n = sc.nextInt();
        if (n <= 0) {
            System.out.println("n cần là số tự nhiên dương. Vui lòng nhập lại!");
            return;
        }
        int tong = tongNSo(n);
        System.out.println("Tổng của " + n + " số tự nhiên đầu tiên = " + tong);
    }


//    public static int tong(int a, int b) {
//        return a + b;
//    }
//
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Nhập a: ");
//        int a = sc.nextInt();
//        System.out.println("Nhập b: ");
//        int b = sc.nextInt();
//        int tong = a + b;
//        System.out.println("Tổng của " + a + " và " + b + " = " + tong);
//    }
}
