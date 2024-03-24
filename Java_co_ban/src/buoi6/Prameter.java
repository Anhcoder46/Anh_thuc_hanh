package buoi6;

public class Prameter {
    public static void tang1(int x, int y) {
        x += 1;
        y += 1;
        System.out.println("Trong tang1 là: " + x + " và " + y);
    }
    public static void main(String[] args) {
        int a = 1;
        int b = 2;
        tang1(a, b);
        System.out.println("Trong hàm main là: " + a + " và " + b);
    }
}
