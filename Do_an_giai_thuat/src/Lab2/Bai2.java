package Lab2;

import java.util.Scanner;

public class Bai2 {
    // Nhập số nguyên a hệ thập phân. Đổi qua nhị phân
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập số hệ thập phân: ");
        int n = sc.nextInt();
        String chuoiNhiPhan = "";
        while (n > 0) {
            int du = n % 2;
            chuoiNhiPhan = du + chuoiNhiPhan;
            n /= 2;
        }
        System.out.println("Đổi nhị phân: " + chuoiNhiPhan);
    }
}