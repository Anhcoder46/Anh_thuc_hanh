package Lab1;

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
