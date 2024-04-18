package buoi8;

import java.util.Scanner;

public class Demo {
    public static Scanner sc;
    public static void main(String[] args) {
        int[] a = new int[10];
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap vao phan tu cua mang: ");
        for(int i = 0; i <= 4; i++) {
            System.out.print("a[" + i + "]= ");
            a[i] = sc.nextInt();
        }
        System.out.println("Cac phan cua mang la: ");
        for(int i = 0; i <= 4; i++) {
            System.out.print(a[i]);
        }
    }
}