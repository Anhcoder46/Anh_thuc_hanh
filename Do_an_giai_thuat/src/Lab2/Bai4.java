package Lab2;

import java.util.Scanner;

public class Bai4 {
    //Kiểm tra 1 số có phải là số Armstrong 371 = 3*3*3 + 7*7*7 + 1*1*1
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Nhập một số nguyên: ");
        int number = scanner.nextInt();

        int originalNumber = number;
        int sum = 0;
        int numDigits = String.valueOf(number).length();

        while (number > 0) {
            int remainder = number % 10;
            sum += Math.pow(remainder, numDigits);
            number /= 10;
        }

        if (sum == originalNumber) {
            System.out.println(originalNumber + " là số Armstrong");
        } else {
            System.out.println(originalNumber + " không phải là số Armstrong");
        }
    }
}
