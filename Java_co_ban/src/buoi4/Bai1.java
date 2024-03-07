package buoi4;

import java.util.Scanner;

public class Bai1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Nhập vào một ký tự (+, -, *, /): ");
        char operation = scanner.next().charAt(0);

        String result;
        switch (operation) {
            case '+':
                System.out.println("add");
                break;
            case '-':
                System.out.println("sub");
                break;
            case '*':
                System.out.println("mul");
                break;
            case '/':
                System.out.println("div");
                break;
            default:
                System.out.println("Không phép tính hợp lệ");
        }
    }
}
