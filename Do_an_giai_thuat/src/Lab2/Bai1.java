package Lab2;

import java.util.Scanner;

public class Bai1 {
    // Nhập vào số nguyên tính tổng các chữ số 12345
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int s = 0;
        while (n > 0) {
            s += n % 10;
            n /= 10;
        }
        System.out.println(s);
    }
}
