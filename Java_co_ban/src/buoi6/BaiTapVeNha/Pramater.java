package buoi6.BaiTapVeNha;

public class Pramater {
    // dấu ... trong khai báo phương thức public static void tong(int... n) trong Java được gọi là "varargs" (viết tắt của "variable-length arguments").
    // Dấu "..." cho phép phương thức nhận một số lượng biến đối số không xác định trước và các đối số này sẽ được truyền vào dưới dạng một mảng.
    public static void tong(int... n) {
        int sum = 0;
        // for(int i : a) dùng để thực hiện một chuổi lệnh lặp lại một số lần cụ thể
        for (int tam : n) {
            sum += tam;
        }
        System.out.println("Tổng các số nguyên: " + sum);
    }

    public static void tong(double... n) {
        double sum = 0.0;
        for (double tam : n) {
            sum += tam;
        }
        System.out.println("Tổng các số thực: " + sum);
    }

    public static void min(int... n) {
        int min = Integer.MAX_VALUE;
        for (int tam : n) {
            if (tam < min) {
                min = tam;
            }
        }
        System.out.println("Số nguyên nhỏ nhất: " + min);
    }

    public static void min(double... n) {
        double min = Double.MAX_VALUE;
        for (double tam : n) {
            if (tam < min) {
                min = tam;
            }
        }
        System.out.println("Số thực nhỏ nhất: " + min);
    }
}