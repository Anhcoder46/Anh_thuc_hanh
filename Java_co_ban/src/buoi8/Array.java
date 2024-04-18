package buoi8;

import java.util.Scanner;

public class Array {
    private static Scanner sc;

    public static void Nhap(int[]a) {
        sc = new Scanner(System.in);
        for(int i = 0; i < a.length; i++) {
            System.out.print("Nhap phan tu thu " + (i + 1) + ": ");
            a[i] = sc.nextInt();
        }
    }

    public static void Xuat(int[]a) {
        sc = new Scanner(System.in);
        for(int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }

    public static boolean Tang(int[]a) {
        for(int i = 1; i < a.length; i++) {
            if(a[i - 1] > a[i]) {
                return false;
            }
        }
        return true;
    }

    public static int ChiaHet7(int[]a) {
        for(int i = 0; i < a.length; i++) {
            if(a[i] % 7 == 0) {
                return i;
            }
        }
        return -1;
    }

    public static void SapXepTang(int[]a) {
        for(int i = 0; i < a.length - 1; i++) {
            for(int j = i + 1; j < a.length; j++) {
                if(a[i] > a[j]) {
                    int tam = a[i];
                    a[i] = a[j];
                    a[j] = tam;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Nhập số lượng phần tử: ");
        n = sc.nextInt();
        int[] a = new int[n];
        Nhap(a);
        Xuat(a);

        boolean ktTang = Tang(a);
        if(ktTang) {
            System.out.println(" là mảng tăng dần");
        } else {
            System.out.println(" la mang khong tang dan");
        }

        int viTri = ChiaHet7(a);
        if (viTri == -1) {
            System.out.print("Khong co phan tu nao chia het cho 7");
        } else {
            System.out.print("Cac phan tu chia het cho 7 la: ");
            for (int i = 0; i < a.length; i++) {
                if (a[i] % 7 == 0) {
                    System.out.print(a[i] + " ");
                }
            }
        }
        SapXepTang(a);
        System.out.print("Mang sau khi sap xep: ");
        Xuat(a);
    }
}
