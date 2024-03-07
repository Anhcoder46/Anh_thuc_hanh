package Lab1;

import java.util.Scanner;

public class Bai2 {
    // Chuyển đổi từ nhiệt độ Fahreneit sang Celsius theo công thức
    // C = 5 * (F - 32) / 9 với C, F: nhiệt độ F
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập nhiệt độ Fahreneit cần đổi: ");
        double f = sc.nextDouble();
        double c = 5 * (f - 32) / 9;
        System.out.printf("%.2f độ Fahrenheit tương đương %.2f độ Celsius\n", f, c);
    }
}
