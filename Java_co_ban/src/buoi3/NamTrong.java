package buoi3;

import java.util.Scanner;

public class NamTrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        do {
            System.out.println("Nhập vào số: ");
            n = sc.nextInt();
        } while (n % 2 != 0 || n % 11 != 0);
        System.out.println(n + " là số chẵn và chia hết cho 11.");
    }
}
