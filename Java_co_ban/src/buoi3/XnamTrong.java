package buoi3;

import java.util.Scanner;

public class XnamTrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x;
        do {
            System.out.println("Nhập vào số: ");
            x = sc.nextInt();
        } while (x < 2 && x > 8); //x < 3 && x > 7); //x < 4 && x > 6 //x != 5);
        int s = 0;
        for (int i = x; i <= 100; i+= x) {
            if (i % 10 == 0) {
                s += i;
            }
        }
        System.out.println("Tổng số tròn chục chia hết cho " + x + " là: " + s);
    }
}
