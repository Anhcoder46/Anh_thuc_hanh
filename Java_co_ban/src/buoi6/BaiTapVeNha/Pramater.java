package buoi6.BaiTapVeNha;

public class Pramater {
    public static void tong(int... n) {
        int sum = 0;
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
        if (n.length == 0) {
            System.out.println("Không có số nguyên");
            return;
        }

        int min = n[0];
        for (int tam : n) {
            if (tam < min) {
                min = tam;
            }
        }
        System.out.println("Số nguyên nhỏ nhất: " + min);
    }

    public static void min(double... n) {
        if (n.length == 0) {
            System.out.println("Không có số thực");
            return;
        }

        double min = n[0];
        for (double tam : n) {
            if (tam < min) {
                min = tam;
            }
        }
        System.out.println("Số thực nhỏ nhất: " + min);
    }

//    public static void main(String[] args) {
//        Pramater.tong(1, 2, 3);
//        Pramater.tong(3.6,5.7,3.8,1.0);
//        Pramater.min(1, 2, 3);
//        Pramater.min(3.6,5.7,3.8,1.0);
//    }
}