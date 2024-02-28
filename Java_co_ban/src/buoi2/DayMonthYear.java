package buoi2;

import java.util.Scanner;

public class DayMonthYear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập tháng: ");
        int month = sc.nextInt();
        if (month < 1 || month > 12) {
            System.out.println("Tháng này không hợp lệ.");
            return;
        }
        switch (month) {
            case 1, 3, 5, 7, 8, 10, 12:
                System.out.println("Tháng " + month + " có 31 ngày.");
                break;
            case 4, 6, 9, 11:
                System.out.println("Tháng " + month + " có 30 ngày.");
                break;
            case 2:
                System.out.println("Nhập năm: ");
                int year = sc.nextInt();
                if (year <= 0) {
                    System.out.println("Năm không hợp lệ. Vui lòng nhập lại.");
                    return;
                }
                if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0))) {
                    System.out.println("Tháng 2 có 29 ngày.");
                } else {
                    System.out.println("Tháng 2 có 28 ngày.");
                }
        }
    }
}