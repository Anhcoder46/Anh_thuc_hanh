package Lab2;

import java.util.Scanner;

public class Bai3 {
    //Kiểm tra 1 số có phải là số Polindrome 15351
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Nhập một số nguyên: ");
        int number = scanner.nextInt();

        int originalNumber = number;
        int reversedNumber = 0;

        while (number > 0) {
            int remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        if (originalNumber == reversedNumber) {
            System.out.println(originalNumber + " là số Palindrome");
        } else {
            System.out.println(originalNumber + " không phải là số Palindrome");
        }
    }
}
