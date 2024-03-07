package buoi4;

import java.util.Scanner;

public class Bai2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x;
        boolean isPrime = true;
        do {
            System.out.print("Nhập vào một số: ");
            x = sc.nextInt();
            if (x <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i <= Math.sqrt(Math.abs(x)); i++) {
                    if (x % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
        } while (!isPrime);
        System.out.println("Bạn đã nhập vào số nguyên tố " + x + ". Chương trình kết thúc.");
    }
}
