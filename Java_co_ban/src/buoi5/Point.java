package buoi5;
public class Point {
    int x;
    int y;
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void setLocation(Point t) {
        x = t.x;
        y = t.y;
    }
    public void print() {
        System.out.println("Tọa độ: (" + x + ", " + y + ")");
    }
    public static void main(String[] args) {
        Point A, B;
        A = new Point(0, 0);
        B = new Point(2, 3);
//        A = B;
        A.setLocation(B);
        System.out.println("Tọa độ điểm A: ");
        A.print();
        System.out.println("Tọa độ điểm B: ");
        B.print();
    }
}