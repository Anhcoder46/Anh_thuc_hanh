package buoi4;

import java.util.Scanner;

public class Bai3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number;
        boolean isPrime = true;
        do {
            System.out.print("Nhập vào một số: ");
            number = scanner.nextInt();
            if (number <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i <= Math.sqrt(Math.abs(number)); i++) {
                    if (number % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
        } while (!isPrime);
        System.out.println("Bạn đã nhập vào số nguyên tố " + number + ". Chương trình kết thúc.");
    }
}
