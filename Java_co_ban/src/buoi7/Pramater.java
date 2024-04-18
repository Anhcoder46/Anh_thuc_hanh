package buoi7;

public class Pramater {
    public static void tang1(int x, int y) {
        x += 1;
        y += 2;
    }

    public static void tong(int... a) {
        long  s = 0;
        for (int i : a) {
            System.out.println( i + " + ");
            s += i;
        }
    }
    public static void main(String[] args) {
        int x = 1;
        int y = 2;
//        tang1(x, y);
//        System.out.println("Trong main " + x + " và " + y);
        tong(1, 2, 3, 4);
        tong(1, 2);
    }
}
