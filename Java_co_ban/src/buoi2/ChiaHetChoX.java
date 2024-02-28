package buoi2;

import java.util.Scanner;

public class ChiaHetChoX {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        //Tính tổng các chữ số chẵn và chia hết cho X
        int x;
        do {
            System.out.print("Nhập số x (2 < x < 100): ");
            x = sc.nextInt();
        } while (x <= 2 || x >= 100);

        // Tính tổng các số chẵn chia hết cho x
//        int sum = 0;
//        for (int i = 2; i <= 100; i += 2) {
//            if (i % x == 0) {
//                sum += i;
//            }
//        }
//        System.out.println("Tổng các số chẵn chia hết cho " + x + " trong khoảng từ 2 đến 100 là: " + sum);


        // Tính tổng các chữ số lẻ và chia hết cho x
//        int sum = 0;
//        for (int i = 2; i <= 100; i += 2) {
//            if (i % x == 0) {
//                sum += i;
//            }
//        }
//        System.out.println("Tổng các số lẻ chia hết cho " + x + " trong khoảng từ 2 đến 100 là: " + sum);


        // Tính tổng các số chia hết cho 3 và chia hết cho x
        int sum = 0;
        for (int i = 2; i <= 100; i++) {
            if (i % x == 0 && i % 3 == 0) {
                sum += i;
            }
        }
        System.out.println("Tổng các số chia hết cho 3 và chia hết cho  " + x + " trong khoảng từ 2 đến 100 là: " + sum);


        //Tính tổng các số chia hết cho 5 và chia hết cho x
//        int sum = 0;
//        for (int i = 2; i <= 100; i++) {
//            if (i % x == 0 && i % 5 == 0) {
//                sum += i;
//            }
//        }
//        System.out.println("Tổng các số chia hết cho 5 và chia hết cho " + x + " trong khoảng từ 2 đến 100 là: " + sum);
    }
}
