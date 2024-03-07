package buoi4;

public class Bai3 {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 100; i <= 500; i++) {
            if (i % 2 != 0 && i != 333) {
                switch (i % 11) {
                    case 0:
                        sum += i;
                        break;
                }
            }
        }
        System.out.println("Tổng các số lẻ chia hết cho 11 trong khoảng [100;500] nhưng không cộng số 333 là: " + sum);
    }
}
