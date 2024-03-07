package Lab1;

import java.util.Scanner;

public class Bai4 {
    //Nhập vào x giây. Quy đổi ra a giờ b phút c giây
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập số giây: ");
        int giay = sc.nextInt();
        int gio = giay / 3600;
        int phut = (giay - gio * 3600) / 60;
        int doi = giay - gio * 3600 - phut * 60;
        System.out.println(giay + " giây bằng " + gio + " giờ " + phut + " phút " + doi + " giây");
    }

}
