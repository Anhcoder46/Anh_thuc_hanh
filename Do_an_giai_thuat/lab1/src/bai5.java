import java.util.Scanner;

public class bai5 {
    // Nhập số tự nhiên n rồi tính tổng (lưu ý phép chia các số nguyên):
    // S1 = 1 + 1/2 + 1/3 + 1/4 + ... 1/n (n > 0)
    // S2 = 1 + 2^2 + 3^2 + ... + n^2 (n > 0)
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Nhập số tự nhiên n
        System.out.print("Nhập số tự nhiên n: ");
        int n = scanner.nextInt();

        // Tính tổng S1
        double s1 = 0.0;
        for (int i = 1; i <= n; i++) {
            s1 += 1.0 / i;
        }

        // Tính tổng S2
        int s2 = 0;
        for (int i = 1; i <= n; i++) {
            s2 += i * i;
        }

        // Hiển thị kết quả
        System.out.printf("S1 = %.6f\n", s1);
        System.out.println("S2 = " + s2);
    }
}
