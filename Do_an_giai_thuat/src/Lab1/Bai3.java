package Lab1;

import java.util.Scanner;

public class Bai3 {
    // Nhập 3 số nguyên a, b, c. Tìm số lớn nhất
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a: ");
        int a = sc.nextInt();
        System.out.println("Nhập b: ");
        int b = sc.nextInt();
        System.out.println("Nhập c: ");
        int c = sc.nextInt();
//        int max = Math.max(a, Math.max(b, c));
        int max = a;
        if (max < b) {
            max = b;
        } else {
            if (max < c) {
                max = c;
            }
        }
        System.out.println("Số lớn nhất: " + max);
    }
}
